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

// Function: entry_0018a930
// Address: 0x18a930 - 0x18a954
void entry_0018a930_0x18a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a930_0x18a930");
#endif

    switch (ctx->pc) {
        case 0x18a93cu: goto label_18a93c;
        default: break;
    }

    ctx->pc = 0x18a930u;

    // 0x18a930: 0xae110208  sw          $s1, 0x208($s0)
    ctx->pc = 0x18a930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 520), GPR_U32(ctx, 17));
    // 0x18a934: 0xc062d76  jal         func_18B5D8
    ctx->pc = 0x18A934u;
    SET_GPR_U32(ctx, 31, 0x18A93Cu);
    ctx->pc = 0x18A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A934u;
    // 0x18a938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B5D8u, 0x18A934u, 0x18A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A93Cu;
label_18a93c:
    // 0x18a93c: 0x96020200  lhu         $v0, 0x200($s0)
    ctx->pc = 0x18a93cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x18a940: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x18a940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x18a944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a948: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18a948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18a94c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x18a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x18a950: 0xa6020200  sh          $v0, 0x200($s0)
    ctx->pc = 0x18a950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 512), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18a954u;
}
