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

// Function: entry_001132c0
// Address: 0x1132c0 - 0x113300
void entry_001132c0_0x1132c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001132c0_0x1132c0");
#endif

    switch (ctx->pc) {
        case 0x1132c8u: goto label_1132c8;
        case 0x1132d4u: goto label_1132d4;
        case 0x1132f8u: goto label_1132f8;
        default: break;
    }

    ctx->pc = 0x1132c0u;

    // 0x1132c0: 0xc060e88  jal         func_183A20
    ctx->pc = 0x1132C0u;
    SET_GPR_U32(ctx, 31, 0x1132C8u);
    ctx->pc = 0x1132C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132C0u;
    // 0x1132c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x1132C0u, 0x1132C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132C8u;
label_1132c8:
    // 0x1132c8: 0x8e240390  lw          $a0, 0x390($s1)
    ctx->pc = 0x1132c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
    // 0x1132cc: 0xc060e88  jal         func_183A20
    ctx->pc = 0x1132CCu;
    SET_GPR_U32(ctx, 31, 0x1132D4u);
    ctx->pc = 0x1132D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132CCu;
    // 0x1132d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x1132CCu, 0x1132D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132D4u;
label_1132d4:
    // 0x1132d4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1132d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1132d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1132D8u;
    {
        const bool branch_taken_0x1132d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132D8u;
        // 0x1132dc: 0x26263410  addiu       $a2, $s1, 0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132d8) {
            ctx->pc = 0x113320u;
            return;
        }
    }
    ctx->pc = 0x1132E0u;
    // 0x1132e0: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1132E0u;
    {
        const bool branch_taken_0x1132e0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1132E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132E0u;
        // 0x1132e4: 0x262433f0  addiu       $a0, $s1, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132e0) {
            ctx->pc = 0x113300u;
            return;
        }
    }
    ctx->pc = 0x1132E8u;
    // 0x1132e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1132e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1132ec: 0x26e54230  addiu       $a1, $s7, 0x4230
    ctx->pc = 0x1132ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 16944));
    // 0x1132f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1132F0u;
    SET_GPR_U32(ctx, 31, 0x1132F8u);
    ctx->pc = 0x1132F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132F0u;
    // 0x1132f4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1132F0u, 0x1132F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132F8u;
label_1132f8:
    // 0x1132f8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1132f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1132fc: 0x262433f0  addiu       $a0, $s1, 0x33F0
    ctx->pc = 0x1132fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
    ctx->pc = 0x113300u;
}
