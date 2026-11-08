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

// Function: entry_001b31b8
// Address: 0x1b31b8 - 0x1b3250
void entry_001b31b8_0x1b31b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b31b8_0x1b31b8");
#endif

    switch (ctx->pc) {
        case 0x1b31f0u: goto label_1b31f0;
        case 0x1b321cu: goto label_1b321c;
        default: break;
    }

    ctx->pc = 0x1b31b8u;

    // 0x1b31b8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1b31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1b31bc: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x1b31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x1b31c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b31c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b31c4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1b31c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1b31c8: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1b31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b31cc: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x1b31ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x1b31d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b31d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b31d4: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1b31d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1b31d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b31d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b31dc: 0xae550014  sw          $s5, 0x14($s2)
    ctx->pc = 0x1b31dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 21));
    // 0x1b31e0: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1b31e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x1b31e4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b31e8: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B31E8u;
    SET_GPR_U32(ctx, 31, 0x1B31F0u);
    ctx->pc = 0x1B31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B31E8u;
    // 0x1b31ec: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B31E8u, 0x1B31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B31F0u;
label_1b31f0:
    // 0x1b31f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b31f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b31f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b31f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b31f8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b31fc: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1b31fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1b3200: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1b3200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1b3204: 0x32c28000  andi        $v0, $s6, 0x8000
    ctx->pc = 0x1b3204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)32768);
    // 0x1b3208: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B3208u;
    {
        const bool branch_taken_0x1b3208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3208u;
        // 0x1b320c: 0xaef49a80  sw          $s4, -0x6580($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294941312), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3208) {
            ctx->pc = 0x1B329Cu;
            return;
        }
    }
    ctx->pc = 0x1B3210u;
    // 0x1b3210: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x1b3210u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x1b3214: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B3214u;
    SET_GPR_U32(ctx, 31, 0x1B321Cu);
    ctx->pc = 0x1B3218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3214u;
    // 0x1b3218: 0x8e64aa14  lw          $a0, -0x55EC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B3214u, 0x1B321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B321Cu;
label_1b321c:
    // 0x1b321c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1b321cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1b3220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b3220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3224: 0x8ce3a980  lw          $v1, -0x5680($a3)
    ctx->pc = 0x1b3224u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24A980u));
    // 0x1b3228: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b3228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b322c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B322Cu;
    {
        const bool branch_taken_0x1b322c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B322Cu;
        // 0x1b3230: 0x3230000f  andi        $s0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b322c) {
            ctx->pc = 0x1B3250u;
            return;
        }
    }
    ctx->pc = 0x1B3234u;
    // 0x1b3234: 0x8ee39a80  lw          $v1, -0x6580($s7)
    ctx->pc = 0x1b3234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294941312)));
    // 0x1b3238: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x1b3238u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x1b323c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1b323cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1b3240: 0xace3a980  sw          $v1, -0x5680($a3)
    ctx->pc = 0x1b3240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945152), GPR_U32(ctx, 3));
    // 0x1b3244: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3244u;
    {
        const bool branch_taken_0x1b3244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3244u;
        // 0x1b3248: 0xaee29a80  sw          $v0, -0x6580($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294941312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3244) {
            ctx->pc = 0x1B328Cu;
            return;
        }
    }
    ctx->pc = 0x1B324Cu;
    // 0x1b324c: 0x0  nop
    ctx->pc = 0x1b324cu;
    // NOP
    ctx->pc = 0x1b3250u;
}
