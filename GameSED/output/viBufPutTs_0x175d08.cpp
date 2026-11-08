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

// Function: viBufPutTs
// Address: 0x175d08 - 0x175e38
void viBufPutTs_0x175d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufPutTs_0x175d08");
#endif

    switch (ctx->pc) {
        case 0x175d30u: goto label_175d30;
        case 0x175d50u: goto label_175d50;
        case 0x175e1cu: goto label_175e1c;
        default: break;
    }

    ctx->pc = 0x175d08u;

    // 0x175d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175d18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x175d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x175d20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x175d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x175d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x175d28: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175D28u;
    SET_GPR_U32(ctx, 31, 0x175D30u);
    ctx->pc = 0x175D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D28u;
    // 0x175d2c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175D28u, 0x175D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D30u;
label_175d30:
    // 0x175d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x175d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d34: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x175d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x175d38: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x175d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x175d3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x175d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x175d40: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x175D40u;
    {
        const bool branch_taken_0x175d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D40u;
        // 0x175d44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d40) {
            ctx->pc = 0x175E14u;
            goto label_175e14;
        }
    }
    ctx->pc = 0x175D48u;
    // 0x175d48: 0xc05d6e8  jal         func_175BA0
    ctx->pc = 0x175D48u;
    SET_GPR_U32(ctx, 31, 0x175D50u);
    ctx->pc = 0x175BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175BA0u, 0x175D48u, 0x175D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175D50u;
label_175d50:
    // 0x175d50: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x175d50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x175d54: 0x4a30005  bgezl       $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x175D54u;
    {
        const bool branch_taken_0x175d54 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x175d54) {
            ctx->pc = 0x175D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175D54u;
            // 0x175d58: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175D6Cu;
            goto label_175d6c;
        }
    }
    ctx->pc = 0x175D5Cu;
    // 0x175d5c: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x175d5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x175d60: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x175D60u;
    {
        const bool branch_taken_0x175d60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x175D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D60u;
        // 0x175d64: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d60) {
            ctx->pc = 0x175E14u;
            goto label_175e14;
        }
    }
    ctx->pc = 0x175D68u;
    // 0x175d68: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_175d6c:
    // 0x175d6c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x175d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175d70: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175d78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175d7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x175d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x175d80: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x175d80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x175d84: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175d88: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x175d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175d8c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175d90: 0xde240008  ld          $a0, 0x8($s1)
    ctx->pc = 0x175d90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x175d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175d98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175d9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x175d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175da0: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x175da0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x175da4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175da8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x175da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175dac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175db0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x175db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x175db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175db8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175dbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x175dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175dc0: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x175dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x175dc4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175dc8: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x175dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x175dcc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x175dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x175dd0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x175dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x175dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175dd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175ddc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x175ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175de0: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x175de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x175de4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x175de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x175de8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x175de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x175dec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x175decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x175df0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x175df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x175df4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x175df4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x175df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x175dfc: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x175dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x175e00: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175E00u;
    {
        const bool branch_taken_0x175e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x175e00) {
            ctx->pc = 0x175E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175E00u;
            // 0x175e04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175E08u;
            goto label_175e08;
        }
    }
    ctx->pc = 0x175E08u;
label_175e08:
    // 0x175e08: 0x2810  mfhi        $a1
    ctx->pc = 0x175e08u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x175e0c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x175e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x175e10: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x175e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175e14:
    // 0x175e14: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x175E14u;
    SET_GPR_U32(ctx, 31, 0x175E1Cu);
    ctx->pc = 0x175E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175E14u;
    // 0x175e18: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x175E14u, 0x175E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175E1Cu;
label_175e1c:
    // 0x175e1c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x175e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175e28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x175e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175e2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x175e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175e30: 0x3e00008  jr          $ra
    ctx->pc = 0x175E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175E30u;
        // 0x175e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175E38u;
}
