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

// Function: viBufModifyPts
// Address: 0x175ba0 - 0x175d04
void viBufModifyPts_0x175ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufModifyPts_0x175ba0");
#endif

    switch (ctx->pc) {
        case 0x175c10u: goto label_175c10;
        default: break;
    }

    ctx->pc = 0x175ba0u;

    // 0x175ba0: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x175ba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ba4: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x175ba4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ba8: 0x8d42005c  lw          $v0, 0x5C($t2)
    ctx->pc = 0x175ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x175bac: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x175bacu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175bb0: 0x8d450058  lw          $a1, 0x58($t2)
    ctx->pc = 0x175bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
    // 0x175bb4: 0x8d4b0054  lw          $t3, 0x54($t2)
    ctx->pc = 0x175bb4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x175bb8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x175bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x175bbc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x175bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x175bc0: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175BC0u;
    {
        const bool branch_taken_0x175bc0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x175bc0) {
            ctx->pc = 0x175BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175BC0u;
            // 0x175bc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175BC8u;
            goto label_175bc8;
        }
    }
    ctx->pc = 0x175BC8u;
label_175bc8:
    // 0x175bc8: 0x4b001a  div         $zero, $v0, $t3
    ctx->pc = 0x175bc8u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175bcc: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x175bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x175bd0: 0x362c0  sll         $t4, $v1, 11
    ctx->pc = 0x175bd0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x175bd4: 0x2010  mfhi        $a0
    ctx->pc = 0x175bd4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x175bd8: 0x18a00048  blez        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x175BD8u;
    {
        const bool branch_taken_0x175bd8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x175BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BD8u;
        // 0x175bdc: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bd8) {
            ctx->pc = 0x175CFCu;
            goto label_175cfc;
        }
    }
    ctx->pc = 0x175BE0u;
    // 0x175be0: 0xd1040  sll         $v0, $t5, 1
    ctx->pc = 0x175be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x175be4: 0x8d430050  lw          $v1, 0x50($t2)
    ctx->pc = 0x175be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x175be8: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x175bec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x175becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x175bf0: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x175bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175bf4: 0x8ce80014  lw          $t0, 0x14($a3)
    ctx->pc = 0x175bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x175bf8: 0x11000040  beqz        $t0, . + 4 + (0x40 << 2)
    ctx->pc = 0x175BF8u;
    {
        const bool branch_taken_0x175bf8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x175bf8) {
            ctx->pc = 0x175CFCu;
            goto label_175cfc;
        }
    }
    ctx->pc = 0x175C00u;
    // 0x175c00: 0x8dc90014  lw          $t1, 0x14($t6)
    ctx->pc = 0x175c00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x175c04: 0x1120003d  beqz        $t1, . + 4 + (0x3D << 2)
    ctx->pc = 0x175C04u;
    {
        const bool branch_taken_0x175c04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c04) {
            ctx->pc = 0x175CFCu;
            goto label_175cfc;
        }
    }
    ctx->pc = 0x175C0Cu;
    // 0x175c0c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x175c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_175c10:
    // 0x175c10: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x175c10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x175c14: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175C14u;
    {
        const bool branch_taken_0x175c14 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c14) {
            ctx->pc = 0x175C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C14u;
            // 0x175c18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175C1Cu;
            goto label_175c1c;
        }
    }
    ctx->pc = 0x175C1Cu;
label_175c1c:
    // 0x175c1c: 0x8dc30010  lw          $v1, 0x10($t6)
    ctx->pc = 0x175c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x175c20: 0xcc2021  addu        $a0, $a2, $t4
    ctx->pc = 0x175c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x175c24: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x175c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x175c28: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x175c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x175c2c: 0x8c001a  div         $zero, $a0, $t4
    ctx->pc = 0x175c2cu;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175c30: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x175c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x175c34: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x175c34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175c38: 0x103100b  movn        $v0, $t0, $v1
    ctx->pc = 0x175c38u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x175c3c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x175c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x175c40: 0x2810  mfhi        $a1
    ctx->pc = 0x175c40u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x175c44: 0xa9282a  slt         $a1, $a1, $t1
    ctx->pc = 0x175c44u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x175c48: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x175C48u;
    {
        const bool branch_taken_0x175c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C48u;
        // 0x175c4c: 0x1021823  subu        $v1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c48) {
            ctx->pc = 0x175CA8u;
            goto label_175ca8;
        }
    }
    ctx->pc = 0x175C50u;
    // 0x175c50: 0xcc001a  div         $zero, $a2, $t4
    ctx->pc = 0x175c50u;
    { int32_t divisor = GPR_S32(ctx, 12);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175c54: 0x51800001  beql        $t4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175C54u;
    {
        const bool branch_taken_0x175c54 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x175c54) {
            ctx->pc = 0x175C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C54u;
            // 0x175c58: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175C5Cu;
            goto label_175c5c;
        }
    }
    ctx->pc = 0x175C5Cu;
label_175c5c:
    // 0x175c5c: 0xace30014  sw          $v1, 0x14($a3)
    ctx->pc = 0x175c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
    // 0x175c60: 0x1010  mfhi        $v0
    ctx->pc = 0x175c60u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175c64: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x175C64u;
    {
        const bool branch_taken_0x175c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x175C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C64u;
        // 0x175c68: 0xace20010  sw          $v0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c64) {
            ctx->pc = 0x175CB0u;
            goto label_175cb0;
        }
    }
    ctx->pc = 0x175C6Cu;
    // 0x175c6c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x175c6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x175c70: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x175C70u;
    {
        const bool branch_taken_0x175c70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x175c70) {
            ctx->pc = 0x175C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175C70u;
            // 0x175c74: 0x8d420058  lw          $v0, 0x58($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175C8Cu;
            goto label_175c8c;
        }
    }
    ctx->pc = 0x175C78u;
    // 0x175c78: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x175c78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x175c7c: 0xfcef0000  sd          $t7, 0x0($a3)
    ctx->pc = 0x175c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 15));
    // 0x175c80: 0xfcef0008  sd          $t7, 0x8($a3)
    ctx->pc = 0x175c80u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 15));
    // 0x175c84: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x175c84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x175c88: 0x8d420058  lw          $v0, 0x58($t2)
    ctx->pc = 0x175c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 88)));
label_175c8c:
    // 0x175c8c: 0x8d4b0054  lw          $t3, 0x54($t2)
    ctx->pc = 0x175c8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x175c90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x175c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x175c94: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x175c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x175c98: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x175c98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x175c9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x175C9Cu;
    {
        const bool branch_taken_0x175c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C9Cu;
        // 0x175ca0: 0xad420058  sw          $v0, 0x58($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c9c) {
            ctx->pc = 0x175CB4u;
            goto label_175cb4;
        }
    }
    ctx->pc = 0x175CA4u;
    // 0x175ca4: 0x0  nop
    ctx->pc = 0x175ca4u;
    // NOP
label_175ca8:
    // 0x175ca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x175CA8u;
    {
        const bool branch_taken_0x175ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CA8u;
        // 0x175cac: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ca8) {
            ctx->pc = 0x175CB4u;
            goto label_175cb4;
        }
    }
    ctx->pc = 0x175CB0u;
label_175cb0:
    // 0x175cb0: 0x8d4b0054  lw          $t3, 0x54($t2)
    ctx->pc = 0x175cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
label_175cb4:
    // 0x175cb4: 0x25a30001  addiu       $v1, $t5, 0x1
    ctx->pc = 0x175cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x175cb8: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x175CB8u;
    {
        const bool branch_taken_0x175cb8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x175cb8) {
            ctx->pc = 0x175CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175CB8u;
            // 0x175cbc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x175CC0u;
            goto label_175cc0;
        }
    }
    ctx->pc = 0x175CC0u;
label_175cc0:
    // 0x175cc0: 0x6b001a  div         $zero, $v1, $t3
    ctx->pc = 0x175cc0u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x175cc4: 0x1010  mfhi        $v0
    ctx->pc = 0x175cc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x175cc8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x175cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x175ccc: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x175cccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175cd0: 0x1300000a  beqz        $t8, . + 4 + (0xA << 2)
    ctx->pc = 0x175CD0u;
    {
        const bool branch_taken_0x175cd0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CD0u;
        // 0x175cd4: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cd0) {
            ctx->pc = 0x175CFCu;
            goto label_175cfc;
        }
    }
    ctx->pc = 0x175CD8u;
    // 0x175cd8: 0x8d420050  lw          $v0, 0x50($t2)
    ctx->pc = 0x175cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x175cdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x175cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x175ce0: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x175ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175ce4: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x175ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x175ce8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175CE8u;
    {
        const bool branch_taken_0x175ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CE8u;
        // 0x175cec: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ce8) {
            ctx->pc = 0x175CFCu;
            goto label_175cfc;
        }
    }
    ctx->pc = 0x175CF0u;
    // 0x175cf0: 0x8dc20014  lw          $v0, 0x14($t6)
    ctx->pc = 0x175cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 20)));
    // 0x175cf4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x175CF4u;
    {
        const bool branch_taken_0x175cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CF4u;
        // 0x175cf8: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cf4) {
            ctx->pc = 0x175C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175c10;
        }
    }
    ctx->pc = 0x175CFCu;
label_175cfc:
    // 0x175cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x175CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CFCu;
        // 0x175d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175D04u;
}
