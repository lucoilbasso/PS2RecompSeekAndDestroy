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

// Function: exponent
// Address: 0x1d2af8 - 0x1d2bd4
void exponent_0x1d2af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("exponent_0x1d2af8");
#endif

    switch (ctx->pc) {
        case 0x1d2b40u: goto label_1d2b40;
        case 0x1d2b88u: goto label_1d2b88;
        default: break;
    }

    ctx->pc = 0x1d2af8u;

    // 0x1d2af8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x1d2af8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d2afc: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x1d2afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d2b00: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2B00u;
    {
        const bool branch_taken_0x1d2b00 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1D2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B00u;
        // 0x1d2b04: 0x27bdfec0  addiu       $sp, $sp, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b00) {
            ctx->pc = 0x1D2B18u;
            goto label_1d2b18;
        }
    }
    ctx->pc = 0x1D2B08u;
    // 0x1d2b08: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d2b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2B0Cu;
    {
        const bool branch_taken_0x1d2b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B0Cu;
        // 0x1d2b10: 0x52823  negu        $a1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b0c) {
            ctx->pc = 0x1D2B1Cu;
            goto label_1d2b1c;
        }
    }
    ctx->pc = 0x1D2B14u;
    // 0x1d2b14: 0x0  nop
    ctx->pc = 0x1d2b14u;
    // NOP
label_1d2b18:
    // 0x1d2b18: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1d2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_1d2b1c:
    // 0x1d2b1c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1d2b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2b20: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x1d2b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x1d2b24: 0x27a70134  addiu       $a3, $sp, 0x134
    ctx->pc = 0x1d2b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x1d2b28: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1d2b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d2b2c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D2B2Cu;
    {
        const bool branch_taken_0x1d2b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B2Cu;
        // 0x1d2b30: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b2c) {
            ctx->pc = 0x1D2BB0u;
            goto label_1d2bb0;
        }
    }
    ctx->pc = 0x1D2B34u;
    // 0x1d2b34: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1d2b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d2b38: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x1d2b38u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d2b3c: 0x0  nop
    ctx->pc = 0x1d2b3cu;
    // NOP
label_1d2b40:
    // 0x1d2b40: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1d2b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1d2b44: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D2B44u;
    {
        const bool branch_taken_0x1d2b44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2b44) {
            ctx->pc = 0x1D2B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2B44u;
            // 0x1d2b48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B4Cu;
            goto label_1d2b4c;
        }
    }
    ctx->pc = 0x1D2B4Cu;
label_1d2b4c:
    // 0x1d2b4c: 0x1812  mflo        $v1
    ctx->pc = 0x1d2b4cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1d2b50: 0x1010  mfhi        $v0
    ctx->pc = 0x1d2b50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d2b54: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d2b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b58: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1d2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d2b5c: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x1d2b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d2b60: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x1d2b60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2b64: 0x5060fff6  beql        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D2B64u;
    {
        const bool branch_taken_0x1d2b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2b64) {
            ctx->pc = 0x1D2B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2B64u;
            // 0x1d2b68: 0xa8001a  div         $zero, $a1, $t0 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2b40;
        }
    }
    ctx->pc = 0x1D2B6Cu;
    // 0x1d2b6c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1d2b70: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x1d2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1d2b74: 0xe9182b  sltu        $v1, $a3, $t1
    ctx->pc = 0x1d2b74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1d2b78: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D2B78u;
    {
        const bool branch_taken_0x1d2b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B78u;
        // 0x1d2b7c: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b78) {
            ctx->pc = 0x1D2BC8u;
            goto label_1d2bc8;
        }
    }
    ctx->pc = 0x1D2B80u;
    // 0x1d2b80: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1d2b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b84: 0x0  nop
    ctx->pc = 0x1d2b84u;
    // NOP
label_1d2b88:
    // 0x1d2b88: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1d2b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d2b8c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d2b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d2b90: 0xe5182b  sltu        $v1, $a3, $a1
    ctx->pc = 0x1d2b90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1d2b94: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1d2b94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2b98: 0x0  nop
    ctx->pc = 0x1d2b98u;
    // NOP
    // 0x1d2b9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D2B9Cu;
    {
        const bool branch_taken_0x1d2b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B9Cu;
        // 0x1d2ba0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b9c) {
            ctx->pc = 0x1D2B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2b88;
        }
    }
    ctx->pc = 0x1D2BA4u;
    // 0x1d2ba4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2BA4u;
    {
        const bool branch_taken_0x1d2ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BA4u;
        // 0x1d2ba8: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ba4) {
            ctx->pc = 0x1D2BCCu;
            goto label_1d2bcc;
        }
    }
    ctx->pc = 0x1D2BACu;
    // 0x1d2bac: 0x0  nop
    ctx->pc = 0x1d2bacu;
    // NOP
label_1d2bb0:
    // 0x1d2bb0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1d2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1d2bb4: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x1d2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1d2bb8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1d2bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d2bbc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d2bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d2bc0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1d2bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d2bc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d2bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d2bc8:
    // 0x1d2bc8: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x1d2bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1d2bcc:
    // 0x1d2bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BCCu;
        // 0x1d2bd0: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2BD4u;
}
