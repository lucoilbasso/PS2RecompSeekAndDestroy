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

// Function: entry_00137d74
// Address: 0x137d74 - 0x137dc8
void entry_00137d74_0x137d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137d74_0x137d74");
#endif

    switch (ctx->pc) {
        case 0x137d88u: goto label_137d88;
        default: break;
    }

    ctx->pc = 0x137d74u;

    // 0x137d74: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x137d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d80: 0xc04dd4a  jal         func_137528
    ctx->pc = 0x137D80u;
    SET_GPR_U32(ctx, 31, 0x137D88u);
    ctx->pc = 0x137D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D80u;
    // 0x137d84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x137528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137528u, 0x137D80u, 0x137D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D88u;
label_137d88:
    // 0x137d88: 0x1840003e  blez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x137D88u;
    {
        const bool branch_taken_0x137d88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x137D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D88u;
        // 0x137d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d88) {
            ctx->pc = 0x137E84u;
            return;
        }
    }
    ctx->pc = 0x137D90u;
    // 0x137d90: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x137d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x137d94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x137d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d98: 0x2447bc50  addiu       $a3, $v0, -0x43B0
    ctx->pc = 0x137d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949968));
    // 0x137d9c: 0x8ce20400  lw          $v0, 0x400($a3)
    ctx->pc = 0x137d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1FC050u));
    // 0x137da0: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x137DA0u;
    {
        const bool branch_taken_0x137da0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x137DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DA0u;
        // 0x137da4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137da0) {
            ctx->pc = 0x137E70u;
            return;
        }
    }
    ctx->pc = 0x137DA8u;
    // 0x137da8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x137da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x137dac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x137dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x137db0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x137db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x137db4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x137db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x137db8: 0x2446a390  addiu       $a2, $v0, -0x5C70
    ctx->pc = 0x137db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943632));
    // 0x137dbc: 0x24090946  addiu       $t1, $zero, 0x946
    ctx->pc = 0x137dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x137dc0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x137dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137dc4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x137dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x137dc8u;
}
