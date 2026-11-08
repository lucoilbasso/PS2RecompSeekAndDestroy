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

// Function: X_RandN__FUi
// Address: 0x19bdc8 - 0x19bed0
void X_RandN__FUi_0x19bdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("X_RandN__FUi_0x19bdc8");
#endif

    switch (ctx->pc) {
        case 0x19bdf0u: goto label_19bdf0;
        default: break;
    }

    ctx->pc = 0x19bdc8u;

    // 0x19bdc8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19bdcc: 0x2463f0f0  addiu       $v1, $v1, -0xF10
    ctx->pc = 0x19bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19bdd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19bdd4: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19BDD4u;
    {
        const bool branch_taken_0x19bdd4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDD4u;
        // 0x19bdd8: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdd4) {
            ctx->pc = 0x19BE20u;
            goto label_19be20;
        }
    }
    ctx->pc = 0x19BDDCu;
    // 0x19bddc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19bde0: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x19bde0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19bde4: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19bde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19bde8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdec: 0x0  nop
    ctx->pc = 0x19bdecu;
    // NOP
label_19bdf0:
    // 0x19bdf0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19bdf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19bdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19bdf8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19bdfc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19be00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19be00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19be04: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19be04u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19be08: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19BE08u;
    {
        const bool branch_taken_0x19be08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE08u;
        // 0x19be0c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be08) {
            ctx->pc = 0x19BDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bdf0;
        }
    }
    ctx->pc = 0x19BE10u;
    // 0x19be10: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19be10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19be14: 0x2442f0f0  addiu       $v0, $v0, -0xF10
    ctx->pc = 0x19be14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19be18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19be18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F4u, _value); } while (0);
    // 0x19be1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19be1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F0F0u, _value); } while (0);
label_19be20:
    // 0x19be20: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19be20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19be24: 0x2445f0f0  addiu       $a1, $v0, -0xF10
    ctx->pc = 0x19be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963440));
    // 0x19be28: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19be28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F0F4u));
    // 0x19be2c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BE2Cu;
    {
        const bool branch_taken_0x19be2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be2c) {
            ctx->pc = 0x19BE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BE2Cu;
            // 0x19be30: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BE48u;
            goto label_19be48;
        }
    }
    ctx->pc = 0x19BE34u;
    // 0x19be34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19be34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19be38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19be38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19be3c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19be40: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19BE40u;
    {
        const bool branch_taken_0x19be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE40u;
        // 0x19be44: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be40) {
            ctx->pc = 0x19BEC0u;
            goto label_19bec0;
        }
    }
    ctx->pc = 0x19BE48u;
label_19be48:
    // 0x19be48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19be48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19be4c: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19be4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19be50: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BE50u;
    {
        const bool branch_taken_0x19be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE50u;
        // 0x19be54: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be50) {
            ctx->pc = 0x19BE70u;
            goto label_19be70;
        }
    }
    ctx->pc = 0x19BE58u;
    // 0x19be58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19be58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19be5c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19be60: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19be60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19be64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19be64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19BE68u;
    {
        const bool branch_taken_0x19be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE68u;
        // 0x19be6c: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be68) {
            ctx->pc = 0x19BE84u;
            goto label_19be84;
        }
    }
    ctx->pc = 0x19BE70u;
label_19be70:
    // 0x19be70: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19be70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19be74: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19be78: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19be78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19be7c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19be7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be80: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19be84:
    // 0x19be84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19be84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19be88: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19be88u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19be8c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19be90: 0x2465f0f0  addiu       $a1, $v1, -0xF10
    ctx->pc = 0x19be90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x19be94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19be94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F0F0u));
    // 0x19be98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19be98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19be9c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19bea0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19bea4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bea8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19beac: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19beacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19beb0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BEB0u;
    {
        const bool branch_taken_0x19beb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BEB0u;
        // 0x19beb4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19beb0) {
            ctx->pc = 0x19BEBCu;
            goto label_19bebc;
        }
    }
    ctx->pc = 0x19BEB8u;
    // 0x19beb8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19bebc:
    // 0x19bebc: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19bec0:
    // 0x19bec0: 0x890019  multu       $a0, $t1
    ctx->pc = 0x19bec0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19bec4: 0x1010  mfhi        $v0
    ctx->pc = 0x19bec4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19bec8: 0x3e00008  jr          $ra
    ctx->pc = 0x19BEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BED0u;
}
