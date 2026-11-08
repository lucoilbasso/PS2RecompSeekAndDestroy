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

// Function: entry_0018a8dc
// Address: 0x18a8dc - 0x18a908
void entry_0018a8dc_0x18a8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a8dc_0x18a8dc");
#endif

    switch (ctx->pc) {
        case 0x18a8e8u: goto label_18a8e8;
        default: break;
    }

    ctx->pc = 0x18a8dcu;

    // 0x18a8dc: 0xae000208  sw          $zero, 0x208($s0)
    ctx->pc = 0x18a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 0));
    // 0x18a8e0: 0xc062d8a  jal         func_18B628
    ctx->pc = 0x18A8E0u;
    SET_GPR_U32(ctx, 31, 0x18A8E8u);
    ctx->pc = 0x18A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8E0u;
    // 0x18a8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B628u, 0x18A8E0u, 0x18A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8E8u;
label_18a8e8:
    // 0x18a8e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x18a8ec: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x18a8ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18a8f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a8f4: 0x3042fff0  andi        $v0, $v0, 0xFFF0
    ctx->pc = 0x18a8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x18a8f8: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x18A8F8u;
    {
        const bool branch_taken_0x18a8f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8F8u;
        // 0x18a8fc: 0xa6020200  sh          $v0, 0x200($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8f8) {
            ctx->pc = 0x18A960u;
            return;
        }
    }
    ctx->pc = 0x18A900u;
    // 0x18a900: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18A900u;
    {
        const bool branch_taken_0x18a900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a900) {
            ctx->pc = 0x18A904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A900u;
            // 0x18a904: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A908u;
            return;
        }
    }
    ctx->pc = 0x18A908u;
}
