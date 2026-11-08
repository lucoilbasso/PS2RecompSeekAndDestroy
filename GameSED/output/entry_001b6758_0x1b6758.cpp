#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001b6758
// Address: 0x1b6758 - 0x1b67ac
void entry_001b6758_0x1b6758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6758_0x1b6758");
#endif

    switch (ctx->pc) {
        case 0x1b6798u: goto label_1b6798;
        default: break;
    }

    ctx->pc = 0x1b6758u;

    // 0x1b6758: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B6758u;
    {
        const bool branch_taken_0x1b6758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6758u;
        // 0x1b675c: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6758) {
            ctx->pc = 0x1B67DCu;
            return;
        }
    }
    ctx->pc = 0x1B6760u;
    // 0x1b6760: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b6760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b6764: 0x2622b400  addiu       $v0, $s1, -0x4C00
    ctx->pc = 0x1b6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294947840));
    // 0x1b6768: 0xae33b400  sw          $s3, -0x4C00($s1)
    ctx->pc = 0x1b6768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947840), GPR_U32(ctx, 19));
    // 0x1b676c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b676cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6770: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b6770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b6774: 0x2484b600  addiu       $a0, $a0, -0x4A00
    ctx->pc = 0x1b6774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    // 0x1b6778: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b6778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b677c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b677cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b6780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6784: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1b6784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b6788: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b6788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b678c: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1b678cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b6790: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B6790u;
    SET_GPR_U32(ctx, 31, 0x1B6798u);
    ctx->pc = 0x1B6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6790u;
    // 0x1b6794: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B6790u, 0x1B6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6798u;
label_1b6798:
    // 0x1b6798: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6798u;
    {
        const bool branch_taken_0x1b6798 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6798) {
            ctx->pc = 0x1B67ACu;
            return;
        }
    }
    ctx->pc = 0x1B67A0u;
    // 0x1b67a0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b67a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b67a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B67A4u;
    {
        const bool branch_taken_0x1b67a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67A4u;
        // 0x1b67a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b67a4) {
            ctx->pc = 0x1B67F0u;
            return;
        }
    }
    ctx->pc = 0x1B67ACu;
}
