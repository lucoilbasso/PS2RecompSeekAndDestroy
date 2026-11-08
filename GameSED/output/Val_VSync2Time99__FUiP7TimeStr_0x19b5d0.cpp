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

// Function: Val_VSync2Time99__FUiP7TimeStr
// Address: 0x19b5d0 - 0x19b708
void Val_VSync2Time99__FUiP7TimeStr_0x19b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Val_VSync2Time99__FUiP7TimeStr_0x19b5d0");
#endif

    switch (ctx->pc) {
        case 0x19b5e0u: goto label_19b5e0;
        case 0x19b5f0u: goto label_19b5f0;
        case 0x19b698u: goto label_19b698;
        default: break;
    }

    ctx->pc = 0x19b5d0u;

    // 0x19b5d0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x19b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x19b5d4: 0x24a70006  addiu       $a3, $a1, 0x6
    ctx->pc = 0x19b5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x19b5d8: 0x2449efa0  addiu       $t1, $v0, -0x1060
    ctx->pc = 0x19b5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963104));
    // 0x19b5dc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x19b5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19b5e0:
    // 0x19b5e0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19b5e4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b5e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b5e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B5E8u;
    {
        const bool branch_taken_0x19b5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5E8u;
        // 0x19b5ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5e8) {
            ctx->pc = 0x19B60Cu;
            goto label_19b60c;
        }
    }
    ctx->pc = 0x19B5F0u;
label_19b5f0:
    // 0x19b5f0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x19b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x19b5f4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x19b5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19b5f8: 0x0  nop
    ctx->pc = 0x19b5f8u;
    // NOP
    // 0x19b5fc: 0x0  nop
    ctx->pc = 0x19b5fcu;
    // NOP
    // 0x19b600: 0x0  nop
    ctx->pc = 0x19b600u;
    // NOP
    // 0x19b604: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19B604u;
    {
        const bool branch_taken_0x19b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B604u;
        // 0x19b608: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b604) {
            ctx->pc = 0x19B5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b5f0;
        }
    }
    ctx->pc = 0x19B60Cu;
label_19b60c:
    // 0x19b60c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x19b60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x19b610: 0xa4e60000  sh          $a2, 0x0($a3)
    ctx->pc = 0x19b610u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x19b614: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x19b614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x19b618: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x19B618u;
    {
        const bool branch_taken_0x19b618 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x19B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B618u;
        // 0x19b61c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b618) {
            ctx->pc = 0x19B5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b5e0;
        }
    }
    ctx->pc = 0x19B620u;
    // 0x19b620: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x19b620u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b624: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19b624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19b628: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x19b628u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b62c: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x19b62cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b630: 0x94a30006  lhu         $v1, 0x6($a1)
    ctx->pc = 0x19b630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x19b634: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x19b634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x19b638: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19b638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19b63c: 0x9484ef60  lhu         $a0, -0x10A0($a0)
    ctx->pc = 0x19b63cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963040)));
    // 0x19b640: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x19b640u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x19b644: 0xa4a00012  sh          $zero, 0x12($a1)
    ctx->pc = 0x19b644u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b648: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19B648u;
    {
        const bool branch_taken_0x19b648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B648u;
        // 0x19b64c: 0xa4a40010  sh          $a0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b648) {
            ctx->pc = 0x19B670u;
            goto label_19b670;
        }
    }
    ctx->pc = 0x19B650u;
    // 0x19b650: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x19b650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19b654: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19b658: 0xa4a2000a  sh          $v0, 0xA($a1)
    ctx->pc = 0x19b658u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b65c: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x19b65cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b660: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x19b660u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b664: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x19b664u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b668: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x19b668u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x19b66c: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x19b66cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
label_19b670:
    // 0x19b670: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x19b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x19b674: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19b674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b67c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19b67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b680: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19b680u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b684: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x19b684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19b688: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19b688u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b68c: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x19b68cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b690: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b694: 0x0  nop
    ctx->pc = 0x19b694u;
    // NOP
label_19b698:
    // 0x19b698: 0x10c90003  beq         $a2, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B698u;
    {
        const bool branch_taken_0x19b698 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x19B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B698u;
        // 0x19b69c: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b698) {
            ctx->pc = 0x19B6A8u;
            goto label_19b6a8;
        }
    }
    ctx->pc = 0x19B6A0u;
    // 0x19b6a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B6A0u;
    {
        const bool branch_taken_0x19b6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6A0u;
        // 0x19b6a4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6a0) {
            ctx->pc = 0x19B6B0u;
            goto label_19b6b0;
        }
    }
    ctx->pc = 0x19B6A8u;
label_19b6a8:
    // 0x19b6a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19b6a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b6ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19b6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19b6b0:
    // 0x19b6b0: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B6B0u;
    {
        const bool branch_taken_0x19b6b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6B0u;
        // 0x19b6b4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6b0) {
            ctx->pc = 0x19B6C8u;
            goto label_19b6c8;
        }
    }
    ctx->pc = 0x19B6B8u;
    // 0x19b6b8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b6bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B6BCu;
    {
        const bool branch_taken_0x19b6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6BCu;
        // 0x19b6c0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6bc) {
            ctx->pc = 0x19B6CCu;
            goto label_19b6cc;
        }
    }
    ctx->pc = 0x19B6C4u;
    // 0x19b6c4: 0x0  nop
    ctx->pc = 0x19b6c4u;
    // NOP
label_19b6c8:
    // 0x19b6c8: 0xa08d0000  sb          $t5, 0x0($a0)
    ctx->pc = 0x19b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 13));
label_19b6cc:
    // 0x19b6cc: 0x50c90006  beql        $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B6CCu;
    {
        const bool branch_taken_0x19b6cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x19b6cc) {
            ctx->pc = 0x19B6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B6CCu;
            // 0x19b6d0: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B6E8u;
            goto label_19b6e8;
        }
    }
    ctx->pc = 0x19B6D4u;
    // 0x19b6d4: 0x50cc0004  beql        $a2, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B6D4u;
    {
        const bool branch_taken_0x19b6d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 12));
        if (branch_taken_0x19b6d4) {
            ctx->pc = 0x19B6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B6D4u;
            // 0x19b6d8: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B6E8u;
            goto label_19b6e8;
        }
    }
    ctx->pc = 0x19B6DCu;
    // 0x19b6dc: 0x54cb0004  bnel        $a2, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B6DCu;
    {
        const bool branch_taken_0x19b6dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        if (branch_taken_0x19b6dc) {
            ctx->pc = 0x19B6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B6DCu;
            // 0x19b6e0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B6F0u;
            goto label_19b6f0;
        }
    }
    ctx->pc = 0x19B6E4u;
    // 0x19b6e4: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x19b6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
label_19b6e8:
    // 0x19b6e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b6ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19b6f0:
    // 0x19b6f0: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x19b6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x19b6f4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19B6F4u;
    {
        const bool branch_taken_0x19b6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6F4u;
        // 0x19b6f8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6f4) {
            ctx->pc = 0x19B698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b698;
        }
    }
    ctx->pc = 0x19B6FCu;
    // 0x19b6fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x19b6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b700: 0x3e00008  jr          $ra
    ctx->pc = 0x19B700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B700u;
        // 0x19b704: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B708u;
}
