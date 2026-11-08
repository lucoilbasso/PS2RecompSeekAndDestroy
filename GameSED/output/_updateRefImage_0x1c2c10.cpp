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

// Function: _updateRefImage
// Address: 0x1c2c10 - 0x1c2ec4
void _updateRefImage_0x1c2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_updateRefImage_0x1c2c10");
#endif

    ctx->pc = 0x1c2c10u;

    // 0x1c2c10: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c2c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c14: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1c2c14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2c18: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x1c2c18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c2c1c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x1c2c1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2c20: 0x8cea0150  lw          $t2, 0x150($a3)
    ctx->pc = 0x1c2c20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x1c2c24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2c24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c28: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x1c2c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x1c2c2c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1c2c2cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2c30: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1c2c30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2c34: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x1C2C34u;
    {
        const bool branch_taken_0x1c2c34 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x1C2C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C34u;
        // 0x1c2c38: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c34) {
            ctx->pc = 0x1C2D48u;
            goto label_1c2d48;
        }
    }
    ctx->pc = 0x1C2C3Cu;
    // 0x1c2c3c: 0x8ce200a0  lw          $v0, 0xA0($a3)
    ctx->pc = 0x1c2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x1c2c40: 0x8ce300a4  lw          $v1, 0xA4($a3)
    ctx->pc = 0x1c2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
    // 0x1c2c44: 0x8ce501c4  lw          $a1, 0x1C4($a3)
    ctx->pc = 0x1c2c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 452)));
    // 0x1c2c48: 0x8ce601d4  lw          $a2, 0x1D4($a3)
    ctx->pc = 0x1c2c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x1c2c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2c50: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x1c2c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x1c2c54: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x1c2c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x1c2c58: 0xace501c0  sw          $a1, 0x1C0($a3)
    ctx->pc = 0x1c2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 5));
    // 0x1c2c5c: 0xace601d0  sw          $a2, 0x1D0($a3)
    ctx->pc = 0x1c2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 6));
    // 0x1c2c60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2C60u;
    {
        const bool branch_taken_0x1c2c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C60u;
        // 0x1c2c64: 0xace401e0  sw          $a0, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c60) {
            ctx->pc = 0x1C2C74u;
            goto label_1c2c74;
        }
    }
    ctx->pc = 0x1C2C68u;
    // 0x1c2c68: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x1c2c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
    // 0x1c2c6c: 0xace001a8  sw          $zero, 0x1A8($a3)
    ctx->pc = 0x1c2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
    // 0x1c2c70: 0xace001a4  sw          $zero, 0x1A4($a3)
    ctx->pc = 0x1c2c70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 420), GPR_U32(ctx, 0));
label_1c2c74:
    // 0x1c2c74: 0x8ce200e8  lw          $v0, 0xE8($a3)
    ctx->pc = 0x1c2c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
    // 0x1c2c78: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2C78u;
    {
        const bool branch_taken_0x1c2c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c78) {
            ctx->pc = 0x1C2C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2C78u;
            // 0x1c2c7c: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2C90u;
            goto label_1c2c90;
        }
    }
    ctx->pc = 0x1C2C80u;
    // 0x1c2c80: 0x8ce201a8  lw          $v0, 0x1A8($a3)
    ctx->pc = 0x1c2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x1c2c84: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2C84u;
    {
        const bool branch_taken_0x1c2c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c84) {
            ctx->pc = 0x1C2C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2C84u;
            // 0x1c2c88: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2CB8u;
            goto label_1c2cb8;
        }
    }
    ctx->pc = 0x1C2C8Cu;
    // 0x1c2c8c: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1c2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_1c2c90:
    // 0x1c2c90: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2C90u;
    {
        const bool branch_taken_0x1c2c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c90) {
            ctx->pc = 0x1C2C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2C90u;
            // 0x1c2c94: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2CB8u;
            goto label_1c2cb8;
        }
    }
    ctx->pc = 0x1C2C98u;
    // 0x1c2c98: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x1c2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1c2c9c: 0x8ce401c8  lw          $a0, 0x1C8($a3)
    ctx->pc = 0x1c2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x1c2ca0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1c2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1c2ca4: 0x8ce301d8  lw          $v1, 0x1D8($a3)
    ctx->pc = 0x1c2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x1c2ca8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1c2ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1c2cac: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1c2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1c2cb0: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x1c2cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c2cb4: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x1c2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
label_1c2cb8:
    // 0x1c2cb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2cbc: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2CBCu;
    {
        const bool branch_taken_0x1c2cbc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CBCu;
        // 0x1c2cc0: 0xace001a8  sw          $zero, 0x1A8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cbc) {
            ctx->pc = 0x1C2CECu;
            goto label_1c2cec;
        }
    }
    ctx->pc = 0x1C2CC4u;
    // 0x1c2cc4: 0x8ce301b8  lw          $v1, 0x1B8($a3)
    ctx->pc = 0x1c2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1c2cc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2ccc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1c2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1c2cd0: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C2CD0u;
    {
        const bool branch_taken_0x1c2cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c2cd0) {
            ctx->pc = 0x1C2CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2CD0u;
            // 0x1c2cd4: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D34u;
            goto label_1c2d34;
        }
    }
    ctx->pc = 0x1C2CD8u;
    // 0x1c2cd8: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1c2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x1c2cdc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C2CDCu;
    {
        const bool branch_taken_0x1c2cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CDCu;
        // 0x1c2ce0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cdc) {
            ctx->pc = 0x1C2E00u;
            goto label_1c2e00;
        }
    }
    ctx->pc = 0x1C2CE4u;
    // 0x1c2ce4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C2CE4u;
    {
        const bool branch_taken_0x1c2ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CE4u;
        // 0x1c2ce8: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ce4) {
            ctx->pc = 0x1C2D34u;
            goto label_1c2d34;
        }
    }
    ctx->pc = 0x1C2CECu;
label_1c2cec:
    // 0x1c2cec: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1c2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x1c2cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2cf4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1c2cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2cf8: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2CF8u;
    {
        const bool branch_taken_0x1c2cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c2cf8) {
            ctx->pc = 0x1C2CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2CF8u;
            // 0x1c2cfc: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D14u;
            goto label_1c2d14;
        }
    }
    ctx->pc = 0x1C2D00u;
    // 0x1c2d00: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1c2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x1c2d04: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1c2d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2d08: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2D08u;
    {
        const bool branch_taken_0x1c2d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1c2d08) {
            ctx->pc = 0x1C2D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D08u;
            // 0x1c2d0c: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D20u;
            goto label_1c2d20;
        }
    }
    ctx->pc = 0x1C2D10u;
    // 0x1c2d10: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x1c2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_1c2d14:
    // 0x1c2d14: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1C2D14u;
    {
        const bool branch_taken_0x1c2d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D14u;
        // 0x1c2d18: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d14) {
            ctx->pc = 0x1C2E00u;
            goto label_1c2e00;
        }
    }
    ctx->pc = 0x1C2D1Cu;
    // 0x1c2d1c: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x1c2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_1c2d20:
    // 0x1c2d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2d24: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1c2d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2d28: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C2D28u;
    {
        const bool branch_taken_0x1c2d28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D28u;
        // 0x1c2d2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d28) {
            ctx->pc = 0x1C2E00u;
            goto label_1c2e00;
        }
    }
    ctx->pc = 0x1C2D30u;
    // 0x1c2d30: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x1c2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_1c2d34:
    // 0x1c2d34: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1c2d34u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2d38: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1c2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1c2d3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c2d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1c2d40: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C2D40u;
    {
        const bool branch_taken_0x1c2d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D40u;
        // 0x1c2d44: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d40) {
            ctx->pc = 0x1C2DFCu;
            goto label_1c2dfc;
        }
    }
    ctx->pc = 0x1C2D48u;
label_1c2d48:
    // 0x1c2d48: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2D48u;
    {
        const bool branch_taken_0x1c2d48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d48) {
            ctx->pc = 0x1C2D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D48u;
            // 0x1c2d4c: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2D84u;
            goto label_1c2d84;
        }
    }
    ctx->pc = 0x1C2D50u;
    // 0x1c2d50: 0x8ce601b8  lw          $a2, 0x1B8($a3)
    ctx->pc = 0x1c2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1c2d54: 0x8ce401bc  lw          $a0, 0x1BC($a3)
    ctx->pc = 0x1c2d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x1c2d58: 0xace601bc  sw          $a2, 0x1BC($a3)
    ctx->pc = 0x1c2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 444), GPR_U32(ctx, 6));
    // 0x1c2d5c: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x1c2d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x1c2d60: 0x8ce301cc  lw          $v1, 0x1CC($a3)
    ctx->pc = 0x1c2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x1c2d64: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x1c2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x1c2d68: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x1c2d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x1c2d6c: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x1c2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x1c2d70: 0xace401b8  sw          $a0, 0x1B8($a3)
    ctx->pc = 0x1c2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 4));
    // 0x1c2d74: 0xace301c8  sw          $v1, 0x1C8($a3)
    ctx->pc = 0x1c2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 3));
    // 0x1c2d78: 0xace201d8  sw          $v0, 0x1D8($a3)
    ctx->pc = 0x1c2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 2));
    // 0x1c2d7c: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x1c2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x1c2d80: 0x8ce201bc  lw          $v0, 0x1BC($a3)
    ctx->pc = 0x1c2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_1c2d84:
    // 0x1c2d84: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x1c2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x1c2d88: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x1c2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x1c2d8c: 0xace201c0  sw          $v0, 0x1C0($a3)
    ctx->pc = 0x1c2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 2));
    // 0x1c2d90: 0xace401d0  sw          $a0, 0x1D0($a3)
    ctx->pc = 0x1c2d90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 4));
    // 0x1c2d94: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2D94u;
    {
        const bool branch_taken_0x1c2d94 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x1C2D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D94u;
        // 0x1c2d98: 0xace301e0  sw          $v1, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d94) {
            ctx->pc = 0x1C2DB0u;
            goto label_1c2db0;
        }
    }
    ctx->pc = 0x1C2D9Cu;
    // 0x1c2d9c: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C2D9Cu;
    {
        const bool branch_taken_0x1c2d9c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x1c2d9c) {
            ctx->pc = 0x1C2DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2D9Cu;
            // 0x1c2da0: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2DFCu;
            goto label_1c2dfc;
        }
    }
    ctx->pc = 0x1C2DA4u;
    // 0x1c2da4: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x1c2da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x1c2da8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2DA8u;
    {
        const bool branch_taken_0x1c2da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DA8u;
        // 0x1c2dac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2da8) {
            ctx->pc = 0x1C2DECu;
            goto label_1c2dec;
        }
    }
    ctx->pc = 0x1C2DB0u;
label_1c2db0:
    // 0x1c2db0: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x1c2db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x1c2db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2db8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1c2db8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1c2dbc: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1C2DBCu;
    {
        const bool branch_taken_0x1c2dbc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x1C2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DBCu;
        // 0x1c2dc0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dbc) {
            ctx->pc = 0x1C2DF8u;
            goto label_1c2df8;
        }
    }
    ctx->pc = 0x1C2DC4u;
    // 0x1c2dc4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2DC4u;
    {
        const bool branch_taken_0x1c2dc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2dc4) {
            ctx->pc = 0x1C2DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2DC4u;
            // 0x1c2dc8: 0x8ce201c8  lw          $v0, 0x1C8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2DDCu;
            goto label_1c2ddc;
        }
    }
    ctx->pc = 0x1C2DCCu;
    // 0x1c2dcc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1c2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2dd0: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2DD0u;
    {
        const bool branch_taken_0x1c2dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1c2dd0) {
            ctx->pc = 0x1C2DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2DD0u;
            // 0x1c2dd4: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2DFCu;
            goto label_1c2dfc;
        }
    }
    ctx->pc = 0x1C2DD8u;
    // 0x1c2dd8: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x1c2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_1c2ddc:
    // 0x1c2ddc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1c2ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2de0: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2DE0u;
    {
        const bool branch_taken_0x1c2de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1C2DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DE0u;
        // 0x1c2de4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2de0) {
            ctx->pc = 0x1C2E00u;
            goto label_1c2e00;
        }
    }
    ctx->pc = 0x1C2DE8u;
    // 0x1c2de8: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x1c2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_1c2dec:
    // 0x1c2dec: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1c2decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1c2df0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2DF0u;
    {
        const bool branch_taken_0x1c2df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DF0u;
        // 0x1c2df4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2df0) {
            ctx->pc = 0x1C2E00u;
            goto label_1c2e00;
        }
    }
    ctx->pc = 0x1C2DF8u;
label_1c2df8:
    // 0x1c2df8: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1c2df8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2dfc:
    // 0x1c2dfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2e00:
    // 0x1c2e00: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2E00u;
    {
        const bool branch_taken_0x1c2e00 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E00u;
        // 0x1c2e04: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e00) {
            ctx->pc = 0x1C2E34u;
            goto label_1c2e34;
        }
    }
    ctx->pc = 0x1C2E08u;
    // 0x1c2e08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2E08u;
    {
        const bool branch_taken_0x1c2e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E08u;
        // 0x1c2e0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e08) {
            ctx->pc = 0x1C2E20u;
            goto label_1c2e20;
        }
    }
    ctx->pc = 0x1C2E10u;
    // 0x1c2e10: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2E10u;
    {
        const bool branch_taken_0x1c2e10 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2e10) {
            ctx->pc = 0x1C2E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2E10u;
            // 0x1c2e14: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2E38u;
            goto label_1c2e38;
        }
    }
    ctx->pc = 0x1C2E18u;
    // 0x1c2e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C2E18u;
    {
        const bool branch_taken_0x1c2e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E18u;
        // 0x1c2e1c: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e18) {
            ctx->pc = 0x1C2E3Cu;
            goto label_1c2e3c;
        }
    }
    ctx->pc = 0x1C2E20u;
label_1c2e20:
    // 0x1c2e20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2e24: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2E24u;
    {
        const bool branch_taken_0x1c2e24 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2e24) {
            ctx->pc = 0x1C2E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2E24u;
            // 0x1c2e28: 0x8ce801c0  lw          $t0, 0x1C0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2E38u;
            goto label_1c2e38;
        }
    }
    ctx->pc = 0x1C2E2Cu;
    // 0x1c2e2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2E2Cu;
    {
        const bool branch_taken_0x1c2e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E2Cu;
        // 0x1c2e30: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e2c) {
            ctx->pc = 0x1C2E3Cu;
            goto label_1c2e3c;
        }
    }
    ctx->pc = 0x1C2E34u;
label_1c2e34:
    // 0x1c2e34: 0x8ce801e0  lw          $t0, 0x1E0($a3)
    ctx->pc = 0x1c2e34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
label_1c2e38:
    // 0x1c2e38: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x1c2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_1c2e3c:
    // 0x1c2e3c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1c2e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e40: 0xdce30828  ld          $v1, 0x828($a3)
    ctx->pc = 0x1c2e40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2088)));
    // 0x1c2e44: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x1c2e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x1c2e48: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x1c2e48u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x1c2e4c: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x1c2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x1c2e50: 0xdce30830  ld          $v1, 0x830($a3)
    ctx->pc = 0x1c2e50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2096)));
    // 0x1c2e54: 0x8ce40174  lw          $a0, 0x174($a3)
    ctx->pc = 0x1c2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c2e58: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x1c2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x1c2e5c: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x1c2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x1c2e60: 0x8ce3013c  lw          $v1, 0x13C($a3)
    ctx->pc = 0x1c2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 316)));
    // 0x1c2e64: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x1c2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x1c2e68: 0x8ce40188  lw          $a0, 0x188($a3)
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x1c2e6c: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x1c2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x1c2e70: 0x8ce30178  lw          $v1, 0x178($a3)
    ctx->pc = 0x1c2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x1c2e74: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x1c2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x1c2e78: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x1c2e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x1c2e7c: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x1c2e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x1c2e80: 0x8ce3018c  lw          $v1, 0x18C($a3)
    ctx->pc = 0x1c2e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 396)));
    // 0x1c2e84: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x1c2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x1c2e88: 0x8ce40190  lw          $a0, 0x190($a3)
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 400)));
    // 0x1c2e8c: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x1c2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x1c2e90: 0x8ce30194  lw          $v1, 0x194($a3)
    ctx->pc = 0x1c2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x1c2e94: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x1c2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x1c2e98: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x1c2e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x1c2e9c: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x1c2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x1c2ea0: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x1c2ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x1c2ea4: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x1c2ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x1c2ea8: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x1c2ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x1c2eac: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x1c2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x1c2eb0: 0x8ce30148  lw          $v1, 0x148($a3)
    ctx->pc = 0x1c2eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x1c2eb4: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x1c2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x1c2eb8: 0x8ce4014c  lw          $a0, 0x14C($a3)
    ctx->pc = 0x1c2eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x1c2ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EBCu;
        // 0x1c2ec0: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2EC4u;
}
