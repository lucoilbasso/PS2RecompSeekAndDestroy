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

// Function: Init__8WcMulobj
// Address: 0x197ab0 - 0x197bac
void Init__8WcMulobj_0x197ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8WcMulobj_0x197ab0");
#endif

    switch (ctx->pc) {
        case 0x197ad0u: goto label_197ad0;
        case 0x197afcu: goto label_197afc;
        case 0x197b18u: goto label_197b18;
        case 0x197b38u: goto label_197b38;
        case 0x197b50u: goto label_197b50;
        default: break;
    }

    ctx->pc = 0x197ab0u;

    // 0x197ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x197ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197abc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x197abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x197ac0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x197ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x197ac4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x197ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x197ac8: 0xc064e54  jal         func_193950
    ctx->pc = 0x197AC8u;
    SET_GPR_U32(ctx, 31, 0x197AD0u);
    ctx->pc = 0x197ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AC8u;
    // 0x197acc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193950u, 0x197AC8u, 0x197AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AD0u;
label_197ad0:
    // 0x197ad0: 0x260301b4  addiu       $v1, $s0, 0x1B4
    ctx->pc = 0x197ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x197ad4: 0x24020946  addiu       $v0, $zero, 0x946
    ctx->pc = 0x197ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x197ad8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x197ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x197adc: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x197adcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ae0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x197ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x197ae4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x197ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x197ae8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x197ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x197aec: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x197aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x197af0: 0xc78c85c8  lwc1        $f12, -0x7A38($gp)
    ctx->pc = 0x197af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197af4: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x197AF4u;
    SET_GPR_U32(ctx, 31, 0x197AFCu);
    ctx->pc = 0x197AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197AF4u;
    // 0x197af8: 0xae0001c0  sw          $zero, 0x1C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x197AF4u, 0x197AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AFCu;
label_197afc:
    // 0x197afc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x197afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b00: 0x21023  negu        $v0, $v0
    ctx->pc = 0x197b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x197b04: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197B04u;
    {
        const bool branch_taken_0x197b04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B04u;
        // 0x197b08: 0xae02019c  sw          $v0, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b04) {
            ctx->pc = 0x197B10u;
            goto label_197b10;
        }
    }
    ctx->pc = 0x197B0Cu;
    // 0x197b0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x197b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_197b10:
    // 0x197b10: 0xc068086  jal         func_1A0218
    ctx->pc = 0x197B10u;
    SET_GPR_U32(ctx, 31, 0x197B18u);
    ctx->pc = 0x197B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B10u;
    // 0x197b14: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x197B10u, 0x197B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B18u;
label_197b18:
    // 0x197b18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b1c: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x197B1Cu;
    {
        const bool branch_taken_0x197b1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x197b1c) {
            ctx->pc = 0x197B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197B1Cu;
            // 0x197b20: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197B40u;
            goto label_197b40;
        }
    }
    ctx->pc = 0x197B24u;
    // 0x197b24: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x197b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b2c: 0x24a583b8  addiu       $a1, $a1, -0x7C48
    ctx->pc = 0x197b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935480));
    // 0x197b30: 0xc068186  jal         func_1A0618
    ctx->pc = 0x197B30u;
    SET_GPR_U32(ctx, 31, 0x197B38u);
    ctx->pc = 0x197B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B30u;
    // 0x197b34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x197B30u, 0x197B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B38u;
label_197b38:
    // 0x197b38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x197B38u;
    {
        const bool branch_taken_0x197b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B38u;
        // 0x197b3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b38) {
            ctx->pc = 0x197B98u;
            goto label_197b98;
        }
    }
    ctx->pc = 0x197B40u;
label_197b40:
    // 0x197b40: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x197b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x197b44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x197b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x197b48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b4c: 0x0  nop
    ctx->pc = 0x197b4cu;
    // NOP
label_197b50:
    // 0x197b50: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x197b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x197b54: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197B54u;
    {
        const bool branch_taken_0x197b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B54u;
        // 0x197b58: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b54) {
            ctx->pc = 0x197B68u;
            goto label_197b68;
        }
    }
    ctx->pc = 0x197B5Cu;
    // 0x197b5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x197B5Cu;
    {
        const bool branch_taken_0x197b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B5Cu;
        // 0x197b60: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b5c) {
            ctx->pc = 0x197B6Cu;
            goto label_197b6c;
        }
    }
    ctx->pc = 0x197B64u;
    // 0x197b64: 0x0  nop
    ctx->pc = 0x197b64u;
    // NOP
label_197b68:
    // 0x197b68: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x197b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_197b6c:
    // 0x197b6c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x197b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x197b70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197b74: 0x2862003f  slti        $v0, $v1, 0x3F
    ctx->pc = 0x197b74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x197b78: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x197B78u;
    {
        const bool branch_taken_0x197b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B78u;
        // 0x197b7c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b78) {
            ctx->pc = 0x197B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197b50;
        }
    }
    ctx->pc = 0x197B80u;
    // 0x197b80: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x197b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x197b84: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x197b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x197b88: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x197b88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x197b8c: 0xaca303f0  sw          $v1, 0x3F0($a1)
    ctx->pc = 0x197b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 3));
    // 0x197b90: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x197b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x197b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x197b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197b98:
    // 0x197b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x197b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x197b9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x197b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197ba0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x197ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x197BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BA4u;
        // 0x197ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197BACu;
}
