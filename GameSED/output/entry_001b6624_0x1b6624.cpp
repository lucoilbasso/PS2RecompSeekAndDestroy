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

// Function: entry_001b6624
// Address: 0x1b6624 - 0x1b6694
void entry_001b6624_0x1b6624(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6624_0x1b6624");
#endif

    switch (ctx->pc) {
        case 0x1b663cu: goto label_1b663c;
        case 0x1b6650u: goto label_1b6650;
        case 0x1b6680u: goto label_1b6680;
        default: break;
    }

    ctx->pc = 0x1b6624u;

    // 0x1b6624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b6624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6628: 0x2451b408  addiu       $s1, $v0, -0x4BF8
    ctx->pc = 0x1b6628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947848));
    // 0x1b662c: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x1b662cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x1b6630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6634: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1B6634u;
    SET_GPR_U32(ctx, 31, 0x1B663Cu);
    ctx->pc = 0x1B6638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6634u;
    // 0x1b6638: 0x2630fff8  addiu       $s0, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1B6634u, 0x1B663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B663Cu;
label_1b663c:
    // 0x1b663c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b663cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6640: 0xa2000103  sb          $zero, 0x103($s0)
    ctx->pc = 0x1b6640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6644: 0x262400fc  addiu       $a0, $s1, 0xFC
    ctx->pc = 0x1b6644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x1b6648: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1B6648u;
    SET_GPR_U32(ctx, 31, 0x1B6650u);
    ctx->pc = 0x1B664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6648u;
    // 0x1b664c: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1B6648u, 0x1B6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6650u;
label_1b6650:
    // 0x1b6650: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1b6650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1b6654: 0xa20001ff  sb          $zero, 0x1FF($s0)
    ctx->pc = 0x1b6654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 511), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b6658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b665c: 0x2484b600  addiu       $a0, $a0, -0x4A00
    ctx->pc = 0x1b665cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948352));
    // 0x1b6660: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b6660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b6664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b6664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6668: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b6668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b666c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1b666cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b6670: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b6670u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6674: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1b6674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b6678: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B6678u;
    SET_GPR_U32(ctx, 31, 0x1B6680u);
    ctx->pc = 0x1B667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6678u;
    // 0x1b667c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B6678u, 0x1B6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6680u;
label_1b6680:
    // 0x1b6680: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6680u;
    {
        const bool branch_taken_0x1b6680 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1b6680) {
            ctx->pc = 0x1B6684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6680u;
            // 0x1b6684: 0x8e22fff8  lw          $v0, -0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6694u;
            return;
        }
    }
    ctx->pc = 0x1B6688u;
    // 0x1b6688: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b6688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b668c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B668Cu;
    {
        const bool branch_taken_0x1b668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B668Cu;
        // 0x1b6690: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b668c) {
            ctx->pc = 0x1B66B4u;
            return;
        }
    }
    ctx->pc = 0x1B6694u;
}
