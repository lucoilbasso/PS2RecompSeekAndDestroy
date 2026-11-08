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

// Function: sceSdRemoteCallbackInit
// Address: 0x1c4c10 - 0x1c4ce4
void sceSdRemoteCallbackInit_0x1c4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSdRemoteCallbackInit_0x1c4c10");
#endif

    switch (ctx->pc) {
        case 0x1c4c74u: goto label_1c4c74;
        case 0x1c4cacu: goto label_1c4cac;
        case 0x1c4cbcu: goto label_1c4cbc;
        case 0x1c4cd0u: goto label_1c4cd0;
        default: break;
    }

    ctx->pc = 0x1c4c10u;

    // 0x1c4c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c4c14: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1c4c18: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c4c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c4c1c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1c4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1c4c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c24: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1c4c24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x1c4c28: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1c4c28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1c4c2c: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1c4c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x1c4c30: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1c4c30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
    // 0x1c4c34: 0x3c0a0025  lui         $t2, 0x25
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)37 << 16));
    // 0x1c4c38: 0x3c0b0025  lui         $t3, 0x25
    ctx->pc = 0x1c4c38u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37 << 16));
    // 0x1c4c3c: 0x3c0c0025  lui         $t4, 0x25
    ctx->pc = 0x1c4c3cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)37 << 16));
    // 0x1c4c40: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c4c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c4c44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4c48: 0xac40ddc4  sw          $zero, -0x223C($v0)
    ctx->pc = 0x1c4c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24DDC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDC4u, _value); } while (0);
    // 0x1c4c4c: 0x3405e620  ori         $a1, $zero, 0xE620
    ctx->pc = 0x1c4c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58912);
    // 0x1c4c50: 0xac60ddc8  sw          $zero, -0x2238($v1)
    ctx->pc = 0x1c4c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24DDC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDC8u, _value); } while (0);
    // 0x1c4c54: 0xacc0ddcc  sw          $zero, -0x2234($a2)
    ctx->pc = 0x1c4c54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24DDCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDCCu, _value); } while (0);
    // 0x1c4c58: 0xace0ddd0  sw          $zero, -0x2230($a3)
    ctx->pc = 0x1c4c58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24DDD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDD0u, _value); } while (0);
    // 0x1c4c5c: 0xad00ddd4  sw          $zero, -0x222C($t0)
    ctx->pc = 0x1c4c5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24DDD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDD4u, _value); } while (0);
    // 0x1c4c60: 0xad20ddd8  sw          $zero, -0x2228($t1)
    ctx->pc = 0x1c4c60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24DDD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDD8u, _value); } while (0);
    // 0x1c4c64: 0xad40dddc  sw          $zero, -0x2224($t2)
    ctx->pc = 0x1c4c64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24DDDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDDCu, _value); } while (0);
    // 0x1c4c68: 0xad60dde0  sw          $zero, -0x2220($t3)
    ctx->pc = 0x1c4c68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24DDE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24DDE0u, _value); } while (0);
    // 0x1c4c6c: 0xc071254  jal         func_1C4950
    ctx->pc = 0x1C4C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C4C74u);
    ctx->pc = 0x1C4C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C6Cu;
    // 0x1c4c70: 0xad80dde4  sw          $zero, -0x221C($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294958564), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4950u, 0x1C4C6Cu, 0x1C4C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C74u;
label_1c4c74:
    // 0x1c4c74: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x1c4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x1c4c78: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c4c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c4c7c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c4c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c4c80: 0x24634ce8  addiu       $v1, $v1, 0x4CE8
    ctx->pc = 0x1c4c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19688));
    // 0x1c4c84: 0x2442dd00  addiu       $v0, $v0, -0x2300
    ctx->pc = 0x1c4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958336));
    // 0x1c4c88: 0x24a54870  addiu       $a1, $a1, 0x4870
    ctx->pc = 0x1c4c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18544));
    // 0x1c4c8c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x1c4c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1c4c90: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1c4c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1c4c94: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1c4c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1c4c98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c4c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c9c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1c4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1c4ca0: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x1c4ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x1c4ca4: 0xc06bc98  jal         func_1AF260
    ctx->pc = 0x1C4CA4u;
    SET_GPR_U32(ctx, 31, 0x1C4CACu);
    ctx->pc = 0x1C4CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CA4u;
    // 0x1c4ca8: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF260u, 0x1C4CA4u, 0x1C4CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CACu;
label_1c4cac:
    // 0x1c4cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cb4: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x1C4CB4u;
    SET_GPR_U32(ctx, 31, 0x1C4CBCu);
    ctx->pc = 0x1C4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CB4u;
    // 0x1c4cb8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x1C4CB4u, 0x1C4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CBCu;
label_1c4cbc:
    // 0x1c4cbc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4CBCu;
    {
        const bool branch_taken_0x1c4cbc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CBCu;
        // 0x1c4cc0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4cbc) {
            ctx->pc = 0x1C4CD4u;
            goto label_1c4cd4;
        }
    }
    ctx->pc = 0x1C4CC4u;
    // 0x1c4cc4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1c4cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1c4cc8: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1C4CC8u;
    SET_GPR_U32(ctx, 31, 0x1C4CD0u);
    ctx->pc = 0x1C4CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4CC8u;
    // 0x1c4ccc: 0x2484b758  addiu       $a0, $a0, -0x48A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1C4CC8u, 0x1C4CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4CD0u;
label_1c4cd0:
    // 0x1c4cd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c4cd4:
    // 0x1c4cd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c4cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4cd8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c4cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4CDCu;
        // 0x1c4ce0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4CE4u;
}
