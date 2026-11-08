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

// Function: entry_0019b198
// Address: 0x19b198 - 0x19b1c8
void entry_0019b198_0x19b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b198_0x19b198");
#endif

    ctx->pc = 0x19b198u;

label_19b198:
    // 0x19b198: 0x82470000  lb          $a3, 0x0($s2)
    ctx->pc = 0x19b198u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_19b19c:
    // 0x19b19c: 0x24e3ffdb  addiu       $v1, $a3, -0x25
    ctx->pc = 0x19b19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967259));
label_19b1a0:
    // 0x19b1a0: 0x2c620054  sltiu       $v0, $v1, 0x54
    ctx->pc = 0x19b1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)84) ? 1 : 0);
label_19b1a4:
    // 0x19b1a4: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
label_19b1a8:
    if (ctx->pc == 0x19B1A8u) {
        ctx->pc = 0x19B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1A4u;
        // 0x19b1a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B1ACu;
        goto label_19b1ac;
    }
    ctx->pc = 0x19B1A4u;
    {
        const bool branch_taken_0x19b1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1A4u;
        // 0x19b1a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1a4) {
            ctx->pc = 0x19B428u;
            return;
        }
    }
    ctx->pc = 0x19B1ACu;
label_19b1ac:
    // 0x19b1ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19b1b0:
    // 0x19b1b0: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x19b1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
label_19b1b4:
    // 0x19b1b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19b1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19b1b8:
    // 0x19b1b8: 0x8c638520  lw          $v1, -0x7AE0($v1)
    ctx->pc = 0x19b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935840)));
label_19b1bc:
    // 0x19b1bc: 0x600008  jr          $v1
label_19b1c0:
    if (ctx->pc == 0x19B1C0u) {
        ctx->pc = 0x19B1C4u;
        goto label_19b1c4;
    }
    ctx->pc = 0x19B1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B1BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19B1C4u;
label_19b1c4:
    // 0x19b1c4: 0x0  nop
    ctx->pc = 0x19b1c4u;
    // NOP
    ctx->pc = 0x19b1c8u;
}
