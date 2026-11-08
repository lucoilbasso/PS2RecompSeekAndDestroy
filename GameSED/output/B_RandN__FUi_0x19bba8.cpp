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

// Function: B_RandN__FUi
// Address: 0x19bba8 - 0x19bcb0
void B_RandN__FUi_0x19bba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_RandN__FUi_0x19bba8");
#endif

    switch (ctx->pc) {
        case 0x19bbd0u: goto label_19bbd0;
        default: break;
    }

    ctx->pc = 0x19bba8u;

    // 0x19bba8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19bbac: 0x2463f008  addiu       $v1, $v1, -0xFF8
    ctx->pc = 0x19bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963208));
    // 0x19bbb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F008u));
    // 0x19bbb4: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19BBB4u;
    {
        const bool branch_taken_0x19bbb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBB4u;
        // 0x19bbb8: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bbb4) {
            ctx->pc = 0x19BC00u;
            goto label_19bc00;
        }
    }
    ctx->pc = 0x19BBBCu;
    // 0x19bbbc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x19bbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x19bbc0: 0x24680008  addiu       $t0, $v1, 0x8
    ctx->pc = 0x19bbc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19bbc4: 0x24478670  addiu       $a3, $v0, -0x7990
    ctx->pc = 0x19bbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
    // 0x19bbc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19bbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbcc: 0x0  nop
    ctx->pc = 0x19bbccu;
    // NOP
label_19bbd0:
    // 0x19bbd0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x19bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x19bbd4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19bbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19bbd8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x19bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19bbdc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19bbe0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19bbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bbe4: 0x28c50037  slti        $a1, $a2, 0x37
    ctx->pc = 0x19bbe4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19bbe8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19BBE8u;
    {
        const bool branch_taken_0x19bbe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBE8u;
        // 0x19bbec: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bbe8) {
            ctx->pc = 0x19BBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bbd0;
        }
    }
    ctx->pc = 0x19BBF0u;
    // 0x19bbf0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bbf4: 0x2442f008  addiu       $v0, $v0, -0xFF8
    ctx->pc = 0x19bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x19bbf8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19bbf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F00Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F00Cu, _value); } while (0);
    // 0x19bbfc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19bbfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21F008u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21F008u, _value); } while (0);
label_19bc00:
    // 0x19bc00: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19bc04: 0x2445f008  addiu       $a1, $v0, -0xFF8
    ctx->pc = 0x19bc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963208));
    // 0x19bc08: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19bc08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21F00Cu));
    // 0x19bc0c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BC0Cu;
    {
        const bool branch_taken_0x19bc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc0c) {
            ctx->pc = 0x19BC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BC0Cu;
            // 0x19bc10: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BC28u;
            goto label_19bc28;
        }
    }
    ctx->pc = 0x19BC14u;
    // 0x19bc14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bc18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bc1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19bc20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19BC20u;
    {
        const bool branch_taken_0x19bc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC20u;
        // 0x19bc24: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc20) {
            ctx->pc = 0x19BCA0u;
            goto label_19bca0;
        }
    }
    ctx->pc = 0x19BC28u;
label_19bc28:
    // 0x19bc28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bc2c: 0x28830018  slti        $v1, $a0, 0x18
    ctx->pc = 0x19bc2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x19bc30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BC30u;
    {
        const bool branch_taken_0x19bc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC30u;
        // 0x19bc34: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc30) {
            ctx->pc = 0x19BC50u;
            goto label_19bc50;
        }
    }
    ctx->pc = 0x19BC38u;
    // 0x19bc38: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19bc3c: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19bc40: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bc44: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19bc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19BC48u;
    {
        const bool branch_taken_0x19bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC48u;
        // 0x19bc4c: 0x8ca3007c  lw          $v1, 0x7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc48) {
            ctx->pc = 0x19BC64u;
            goto label_19bc64;
        }
    }
    ctx->pc = 0x19BC50u;
label_19bc50:
    // 0x19bc50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19bc54: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x19bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19bc58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bc5c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x19bc5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc60: 0x8ca3ffa0  lw          $v1, -0x60($a1)
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967200)));
label_19bc64:
    // 0x19bc64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bc68: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19bc6c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19bc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x19bc70: 0x2465f008  addiu       $a1, $v1, -0xFF8
    ctx->pc = 0x19bc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963208));
    // 0x19bc74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19bc74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21F008u));
    // 0x19bc78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bc7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19bc80: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x19bc80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x19bc84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bc88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bc8c: 0x28620037  slti        $v0, $v1, 0x37
    ctx->pc = 0x19bc8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)55) ? 1 : 0);
    // 0x19bc90: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BC90u;
    {
        const bool branch_taken_0x19bc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC90u;
        // 0x19bc94: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc90) {
            ctx->pc = 0x19BC9Cu;
            goto label_19bc9c;
        }
    }
    ctx->pc = 0x19BC98u;
    // 0x19bc98: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x19bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_19bc9c:
    // 0x19bc9c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x19bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_19bca0:
    // 0x19bca0: 0x890019  multu       $a0, $t1
    ctx->pc = 0x19bca0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19bca4: 0x1010  mfhi        $v0
    ctx->pc = 0x19bca4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19bca8: 0x3e00008  jr          $ra
    ctx->pc = 0x19BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BCB0u;
}
