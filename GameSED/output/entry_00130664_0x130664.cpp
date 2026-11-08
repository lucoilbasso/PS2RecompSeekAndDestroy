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

// Function: entry_00130664
// Address: 0x130664 - 0x1306d0
void entry_00130664_0x130664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130664_0x130664");
#endif

    switch (ctx->pc) {
        case 0x1306b8u: goto label_1306b8;
        default: break;
    }

    ctx->pc = 0x130664u;

    // 0x130664: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x130664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x130668: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x130668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13066c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x130670: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x130670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x130674: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x130674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
    // 0x130678: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x130678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13067c: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x13067cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x130680: 0x96040018  lhu         $a0, 0x18($s0)
    ctx->pc = 0x130680u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x130684: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x130684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x130688: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x130688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13068c: 0x8d090020  lw          $t1, 0x20($t0)
    ctx->pc = 0x13068cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x130690: 0xa62200c6  sh          $v0, 0xC6($s1)
    ctx->pc = 0x130690u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 198), (uint16_t)GPR_U32(ctx, 2));
    // 0x130694: 0xa62400c4  sh          $a0, 0xC4($s1)
    ctx->pc = 0x130694u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 196), (uint16_t)GPR_U32(ctx, 4));
    // 0x130698: 0xae2600c8  sw          $a2, 0xC8($s1)
    ctx->pc = 0x130698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 6));
    // 0x13069c: 0xae2300cc  sw          $v1, 0xCC($s1)
    ctx->pc = 0x13069cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
    // 0x1306a0: 0xae2500d0  sw          $a1, 0xD0($s1)
    ctx->pc = 0x1306a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 5));
    // 0x1306a4: 0xae2700dc  sw          $a3, 0xDC($s1)
    ctx->pc = 0x1306a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 7));
    // 0x1306a8: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1306A8u;
    {
        const bool branch_taken_0x1306a8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1306ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306A8u;
        // 0x1306ac: 0xae2800d4  sw          $t0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306a8) {
            ctx->pc = 0x1306D0u;
            return;
        }
    }
    ctx->pc = 0x1306B0u;
    // 0x1306b0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x1306B0u;
    SET_GPR_U32(ctx, 31, 0x1306B8u);
    ctx->pc = 0x1306B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1306B0u;
    // 0x1306b4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x1306B0u, 0x1306B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1306B8u;
label_1306b8:
    // 0x1306b8: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x1306b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1306bc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1306bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1306c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1306c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1306c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1306C4u;
    {
        const bool branch_taken_0x1306c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306C4u;
        // 0x1306c8: 0xae2300e4  sw          $v1, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306c4) {
            ctx->pc = 0x1306D8u;
            return;
        }
    }
    ctx->pc = 0x1306CCu;
    // 0x1306cc: 0x0  nop
    ctx->pc = 0x1306ccu;
    // NOP
    ctx->pc = 0x1306d0u;
}
