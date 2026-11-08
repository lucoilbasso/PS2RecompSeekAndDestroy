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

// Function: entry_001158ec
// Address: 0x1158ec - 0x115940
void entry_001158ec_0x1158ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001158ec_0x1158ec");
#endif

    switch (ctx->pc) {
        case 0x115910u: goto label_115910;
        case 0x115920u: goto label_115920;
        default: break;
    }

    ctx->pc = 0x1158ecu;

    // 0x1158ec: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1158ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1158f0: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x1158f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x1158f4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x1158f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1158f8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1158f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1158fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1158fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115900: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x115900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115904: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x115904u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x115908: 0xc041882  jal         func_106208
    ctx->pc = 0x115908u;
    SET_GPR_U32(ctx, 31, 0x115910u);
    ctx->pc = 0x11590Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115908u;
    // 0x11590c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115908u, 0x115910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115910u;
label_115910:
    // 0x115910: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x115910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115914: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x115914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115918: 0xc041882  jal         func_106208
    ctx->pc = 0x115918u;
    SET_GPR_U32(ctx, 31, 0x115920u);
    ctx->pc = 0x11591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115918u;
    // 0x11591c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115918u, 0x115920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115920u;
label_115920:
    // 0x115920: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x115920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x115924: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x115924u;
    {
        const bool branch_taken_0x115924 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x115928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115924u;
        // 0x115928: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115924) {
            ctx->pc = 0x115944u;
            return;
        }
    }
    ctx->pc = 0x11592Cu;
    // 0x11592c: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x11592cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
    // 0x115930: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x115930u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x115934: 0x8ea20400  lw          $v0, 0x400($s5)
    ctx->pc = 0x115934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1024)));
    // 0x115938: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x115938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11593c: 0xaea20400  sw          $v0, 0x400($s5)
    ctx->pc = 0x11593cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1024), GPR_U32(ctx, 2));
    ctx->pc = 0x115940u;
}
