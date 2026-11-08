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

// Function: entry_0018d608
// Address: 0x18d608 - 0x18d634
void entry_0018d608_0x18d608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d608_0x18d608");
#endif

    switch (ctx->pc) {
        case 0x18d630u: goto label_18d630;
        default: break;
    }

    ctx->pc = 0x18d608u;

    // 0x18d608: 0x8e220228  lw          $v0, 0x228($s1)
    ctx->pc = 0x18d608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x18d60c: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x18d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x18d610: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x18d610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x18d614: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x18d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x18d618: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D618u;
    {
        const bool branch_taken_0x18d618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18d618) {
            ctx->pc = 0x18D61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D618u;
            // 0x18d61c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D634u;
            return;
        }
    }
    ctx->pc = 0x18D620u;
    // 0x18d620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d624: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18d624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d628: 0xc063b70  jal         func_18EDC0
    ctx->pc = 0x18D628u;
    SET_GPR_U32(ctx, 31, 0x18D630u);
    ctx->pc = 0x18D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D628u;
    // 0x18d62c: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EDC0u, 0x18D628u, 0x18D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D630u;
label_18d630:
    // 0x18d630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x18d634u;
}
