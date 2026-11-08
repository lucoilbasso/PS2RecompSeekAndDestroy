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

// Function: entry_001838bc
// Address: 0x1838bc - 0x1838fc
void entry_001838bc_0x1838bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001838bc_0x1838bc");
#endif

    switch (ctx->pc) {
        case 0x1838e8u: goto label_1838e8;
        default: break;
    }

    ctx->pc = 0x1838bcu;

    // 0x1838bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1838bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1838c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1838c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838c4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1838c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1838c8: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x1838c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1838cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1838ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838d0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1838d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1838d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1838D4u;
    {
        const bool branch_taken_0x1838d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1838D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838D4u;
        // 0x1838d8: 0x103a021  addu        $s4, $t0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838d4) {
            ctx->pc = 0x1838FCu;
            return;
        }
    }
    ctx->pc = 0x1838DCu;
    // 0x1838dc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1838dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1838e0: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1838E0u;
    SET_GPR_U32(ctx, 31, 0x1838E8u);
    ctx->pc = 0x1838E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838E0u;
    // 0x1838e4: 0x24847e28  addiu       $a0, $a0, 0x7E28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1838E0u, 0x1838E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838E8u;
label_1838e8:
    // 0x1838e8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1838e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1838ec: 0x24a57e38  addiu       $a1, $a1, 0x7E38
    ctx->pc = 0x1838ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32312));
    // 0x1838f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1838f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838f4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1838F4u;
    SET_GPR_U32(ctx, 31, 0x1838FCu);
    ctx->pc = 0x1838F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838F4u;
    // 0x1838f8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1838F4u, 0x1838FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1838FCu;
}
