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

// Function: entry_001441e4
// Address: 0x1441e4 - 0x144210
void entry_001441e4_0x1441e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001441e4_0x1441e4");
#endif

    switch (ctx->pc) {
        case 0x1441f4u: goto label_1441f4;
        case 0x14420cu: goto label_14420c;
        default: break;
    }

    ctx->pc = 0x1441e4u;

    // 0x1441e4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1441E4u;
    {
        const bool branch_taken_0x1441e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1441e4) {
            ctx->pc = 0x144210u;
            return;
        }
    }
    ctx->pc = 0x1441ECu;
    // 0x1441ec: 0xc05f8ee  jal         func_17E3B8
    ctx->pc = 0x1441ECu;
    SET_GPR_U32(ctx, 31, 0x1441F4u);
    ctx->pc = 0x1441F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441ECu;
    // 0x1441f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3B8u, 0x1441ECu, 0x1441F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441F4u;
label_1441f4:
    // 0x1441f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1441f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1441f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1441fc: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x1441fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x144200: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x144200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144204: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144204u;
    SET_GPR_U32(ctx, 31, 0x14420Cu);
    ctx->pc = 0x144208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144204u;
    // 0x144208: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144204u, 0x14420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14420Cu;
label_14420c:
    // 0x14420c: 0xae70005c  sw          $s0, 0x5C($s3)
    ctx->pc = 0x14420cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 16));
    ctx->pc = 0x144210u;
}
