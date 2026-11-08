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

// Function: entry_001c4aa8
// Address: 0x1c4aa8 - 0x1c4ae8
void entry_001c4aa8_0x1c4aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4aa8_0x1c4aa8");
#endif

    switch (ctx->pc) {
        case 0x1c4ae0u: goto label_1c4ae0;
        default: break;
    }

    ctx->pc = 0x1c4aa8u;

    // 0x1c4aa8: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C4AA8u;
    {
        const bool branch_taken_0x1c4aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AA8u;
        // 0x1c4aac: 0x340281c0  ori         $v0, $zero, 0x81C0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33216);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4aa8) {
            ctx->pc = 0x1C4AE8u;
            return;
        }
    }
    ctx->pc = 0x1C4AB0u;
    // 0x1c4ab0: 0x2607dc80  addiu       $a3, $s0, -0x2380
    ctx->pc = 0x1c4ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
    // 0x1c4ab4: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1c4ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ab8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1c4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c4abc: 0x2584dcc0  addiu       $a0, $t4, -0x2340
    ctx->pc = 0x1c4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294958272));
    // 0x1c4ac0: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1c4ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1c4ac4: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x1c4ac4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ac8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c4ac8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4acc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c4accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c4ad0: 0x34a58140  ori         $a1, $a1, 0x8140
    ctx->pc = 0x1c4ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33088);
    // 0x1c4ad4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1c4ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c4ad8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C4AD8u;
    SET_GPR_U32(ctx, 31, 0x1C4AE0u);
    ctx->pc = 0x1C4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4AD8u;
    // 0x1c4adc: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C4AD8u, 0x1C4AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AE0u;
label_1c4ae0:
    // 0x1c4ae0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1C4AE0u;
    {
        const bool branch_taken_0x1c4ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AE0u;
        // 0x1c4ae4: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ae0) {
            ctx->pc = 0x1C4BE0u;
            return;
        }
    }
    ctx->pc = 0x1C4AE8u;
}
