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

// Function: entry_00186494
// Address: 0x186494 - 0x1864b4
void entry_00186494_0x186494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186494_0x186494");
#endif

    switch (ctx->pc) {
        case 0x1864a0u: goto label_1864a0;
        default: break;
    }

    ctx->pc = 0x186494u;

    // 0x186494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186498: 0xc061390  jal         func_184E40
    ctx->pc = 0x186498u;
    SET_GPR_U32(ctx, 31, 0x1864A0u);
    ctx->pc = 0x18649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186498u;
    // 0x18649c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184E40u, 0x186498u, 0x1864A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1864A0u;
label_1864a0:
    // 0x1864a0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1864a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1864a4: 0x30431fff  andi        $v1, $v0, 0x1FFF
    ctx->pc = 0x1864a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x1864a8: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1864a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1864ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1864ACu;
    {
        const bool branch_taken_0x1864ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864ACu;
        // 0x1864b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864ac) {
            ctx->pc = 0x1864BCu;
            return;
        }
    }
    ctx->pc = 0x1864B4u;
}
