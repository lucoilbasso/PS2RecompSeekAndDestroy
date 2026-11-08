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

// Function: _sceCd_cd_read_intr
// Address: 0x1b9fa0 - 0x1ba040
void _sceCd_cd_read_intr_0x1b9fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_cd_read_intr_0x1b9fa0");
#endif

    switch (ctx->pc) {
        case 0x1b9fd0u: goto label_1b9fd0;
        case 0x1ba018u: goto label_1ba018;
        default: break;
    }

    ctx->pc = 0x1b9fa0u;

    // 0x1b9fa0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b9fa4: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1b9fa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b9fa8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1b9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b9fac: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B9FACu;
    {
        const bool branch_taken_0x1b9fac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FACu;
        // 0x1b9fb0: 0x3c090025  lui         $t1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fac) {
            ctx->pc = 0x1B9FF8u;
            goto label_1b9ff8;
        }
    }
    ctx->pc = 0x1B9FB4u;
    // 0x1b9fb4: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x1b9fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b9fb8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B9FB8u;
    {
        const bool branch_taken_0x1b9fb8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B9FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FB8u;
        // 0x1b9fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fb8) {
            ctx->pc = 0x1B9FF8u;
            goto label_1b9ff8;
        }
    }
    ctx->pc = 0x1B9FC0u;
    // 0x1b9fc0: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x1b9fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1b9fc4: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1b9fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
    // 0x1b9fc8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1b9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1b9fcc: 0x0  nop
    ctx->pc = 0x1b9fccu;
    // NOP
label_1b9fd0:
    // 0x1b9fd0: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x1b9fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1b9fd4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b9fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9fd8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b9fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b9fdc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b9fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9fe0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1b9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b9fe4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b9fe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b9fe8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B9FE8u;
    {
        const bool branch_taken_0x1b9fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FE8u;
        // 0x1b9fec: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fe8) {
            ctx->pc = 0x1B9FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9fd0;
        }
    }
    ctx->pc = 0x1B9FF0u;
    // 0x1b9ff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9FF0u;
    {
        const bool branch_taken_0x1b9ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FF0u;
        // 0x1b9ff4: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ff0) {
            ctx->pc = 0x1B9FFCu;
            goto label_1b9ffc;
        }
    }
    ctx->pc = 0x1B9FF8u;
label_1b9ff8:
    // 0x1b9ff8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1b9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1b9ffc:
    // 0x1b9ffc: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B9FFCu;
    {
        const bool branch_taken_0x1b9ffc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b9ffc) {
            ctx->pc = 0x1BA038u;
            goto label_1ba038;
        }
    }
    ctx->pc = 0x1BA004u;
    // 0x1ba004: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x1ba004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ba008: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA008u;
    {
        const bool branch_taken_0x1ba008 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA008u;
        // 0x1ba00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba008) {
            ctx->pc = 0x1BA038u;
            goto label_1ba038;
        }
    }
    ctx->pc = 0x1BA010u;
    // 0x1ba010: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x1ba010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x1ba014: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1ba014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1ba018:
    // 0x1ba018: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x1ba018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1ba01c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ba01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba020: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ba020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ba024: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ba024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ba028: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1ba028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1ba02c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1ba02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ba030: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BA030u;
    {
        const bool branch_taken_0x1ba030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA030u;
        // 0x1ba034: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba030) {
            ctx->pc = 0x1BA018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba018;
        }
    }
    ctx->pc = 0x1BA038u;
label_1ba038:
    // 0x1ba038: 0x806e75a  j           func_1B9D68
    ctx->pc = 0x1BA038u;
    ctx->pc = 0x1BA03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA038u;
    // 0x1ba03c: 0x2524c0d4  addiu       $a0, $t1, -0x3F2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294951124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D68u;
    _sceCd_cd_callback_0x1b9d68(rdram, ctx, runtime); return;
    ctx->pc = 0x1BA040u;
}
