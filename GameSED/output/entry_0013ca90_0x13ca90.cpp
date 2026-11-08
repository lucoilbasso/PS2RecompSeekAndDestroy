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

// Function: entry_0013ca90
// Address: 0x13ca90 - 0x13cac0
void entry_0013ca90_0x13ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ca90_0x13ca90");
#endif

    switch (ctx->pc) {
        case 0x13caacu: goto label_13caac;
        default: break;
    }

    ctx->pc = 0x13ca90u;

    // 0x13ca90: 0x269101c0  addiu       $s1, $s4, 0x1C0
    ctx->pc = 0x13ca90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
    // 0x13ca94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13ca98: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13CA98u;
    {
        const bool branch_taken_0x13ca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CA98u;
        // 0x13ca9c: 0x8e520150  lw          $s2, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ca98) {
            ctx->pc = 0x13CB10u;
            return;
        }
    }
    ctx->pc = 0x13CAA0u;
    // 0x13caa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13caa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13caa4: 0xc05dd18  jal         func_177460
    ctx->pc = 0x13CAA4u;
    SET_GPR_U32(ctx, 31, 0x13CAACu);
    ctx->pc = 0x13CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CAA4u;
    // 0x13caa8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13CAA4u, 0x13CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CAACu;
label_13caac:
    // 0x13caac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13cab0: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x13CAB0u;
    {
        const bool branch_taken_0x13cab0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13cab0) {
            ctx->pc = 0x13CB08u;
            return;
        }
    }
    ctx->pc = 0x13CAB8u;
    // 0x13cab8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13cabc: 0x0  nop
    ctx->pc = 0x13cabcu;
    // NOP
    ctx->pc = 0x13cac0u;
}
