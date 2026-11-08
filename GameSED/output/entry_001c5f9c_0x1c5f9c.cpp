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

// Function: entry_001c5f9c
// Address: 0x1c5f9c - 0x1c6008
void entry_001c5f9c_0x1c5f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f9c_0x1c5f9c");
#endif

    switch (ctx->pc) {
        case 0x1c5fb0u: goto label_1c5fb0;
        case 0x1c5ff0u: goto label_1c5ff0;
        default: break;
    }

    ctx->pc = 0x1c5f9cu;

    // 0x1c5f9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c5f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fa0: 0x2610ef04  addiu       $s0, $s0, -0x10FC
    ctx->pc = 0x1c5fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962948));
    // 0x1c5fa4: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1c5fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1c5fa8: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x1C5FA8u;
    SET_GPR_U32(ctx, 31, 0x1C5FB0u);
    ctx->pc = 0x1C5FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FA8u;
    // 0x1c5fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x1C5FA8u, 0x1C5FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FB0u;
label_1c5fb0:
    // 0x1c5fb0: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1c5fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1c5fb4: 0xae13ffec  sw          $s3, -0x14($s0)
    ctx->pc = 0x1c5fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 19));
    // 0x1c5fb8: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x1c5fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x1c5fbc: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x1c5fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x1c5fc0: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1c5fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5fc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c5fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fc8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1c5fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1c5fcc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1c5fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fd0: 0x25290400  addiu       $t1, $t1, 0x400
    ctx->pc = 0x1c5fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1024));
    // 0x1c5fd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c5fd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c5fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c5fdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c5fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5fe0: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1c5fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1c5fe4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1c5fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c5fe8: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1C5FE8u;
    SET_GPR_U32(ctx, 31, 0x1C5FF0u);
    ctx->pc = 0x1C5FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FE8u;
    // 0x1c5fec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1C5FE8u, 0x1C5FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FF0u;
label_1c5ff0:
    // 0x1c5ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5ff4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5FF4u;
    {
        const bool branch_taken_0x1c5ff4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FF4u;
        // 0x1c5ff8: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ff4) {
            ctx->pc = 0x1C6008u;
            return;
        }
    }
    ctx->pc = 0x1C5FFCu;
    // 0x1c5ffc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1c5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c6000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6000u;
    {
        const bool branch_taken_0x1c6000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6000u;
        // 0x1c6004: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6000) {
            ctx->pc = 0x1C6010u;
            return;
        }
    }
    ctx->pc = 0x1C6008u;
}
