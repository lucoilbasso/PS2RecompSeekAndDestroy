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

// Function: entry_001306d8
// Address: 0x1306d8 - 0x13070c
void entry_001306d8_0x1306d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001306d8_0x1306d8");
#endif

    switch (ctx->pc) {
        case 0x130700u: goto label_130700;
        default: break;
    }

    ctx->pc = 0x1306d8u;

    // 0x1306d8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1306d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1306dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1306dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1306e0: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x1306e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1306e4: 0xae230108  sw          $v1, 0x108($s1)
    ctx->pc = 0x1306e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 3));
    // 0x1306e8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1306ec: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1306ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1306f0: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1306F0u;
    {
        const bool branch_taken_0x1306f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1306F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306F0u;
        // 0x1306f4: 0xae22010c  sw          $v0, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306f0) {
            ctx->pc = 0x13070Cu;
            return;
        }
    }
    ctx->pc = 0x1306F8u;
    // 0x1306f8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1306F8u;
    SET_GPR_U32(ctx, 31, 0x130700u);
    ctx->pc = 0x1306FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306F8u;
    // 0x1306fc: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1306F8u, 0x130700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130700u;
label_130700:
    // 0x130700: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x130700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x130704: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130708: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x130708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
    ctx->pc = 0x13070cu;
}
