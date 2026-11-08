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

// Function: entry_0015a928
// Address: 0x15a928 - 0x15a94c
void entry_0015a928_0x15a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a928_0x15a928");
#endif

    switch (ctx->pc) {
        case 0x15a948u: goto label_15a948;
        default: break;
    }

    ctx->pc = 0x15a928u;

    // 0x15a928: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x15a928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a92c: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a92cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x15a930: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x15a930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x15a934: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A934u;
    {
        const bool branch_taken_0x15a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a934) {
            ctx->pc = 0x15A938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A934u;
            // 0x15a938: 0x96020016  lhu         $v0, 0x16($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A94Cu;
            return;
        }
    }
    ctx->pc = 0x15A93Cu;
    // 0x15a93c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a940: 0xc056e3a  jal         func_15B8E8
    ctx->pc = 0x15A940u;
    SET_GPR_U32(ctx, 31, 0x15A948u);
    ctx->pc = 0x15A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A940u;
    // 0x15a944: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B8E8u, 0x15A940u, 0x15A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A948u;
label_15a948:
    // 0x15a948: 0x96020016  lhu         $v0, 0x16($s0)
    ctx->pc = 0x15a948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    ctx->pc = 0x15a94cu;
}
