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

// Function: entry_001d5d28
// Address: 0x1d5d28 - 0x1d5d80
void entry_001d5d28_0x1d5d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5d28_0x1d5d28");
#endif

    ctx->pc = 0x1d5d28u;

label_1d5d28:
    // 0x1d5d28: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1d5d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5d2c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d5d30: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1d5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d5d34: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1d5d34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1d5d38: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1d5d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d5d3c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1d5d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1d5d40: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1d5d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d5d44: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1d5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d5d48: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d5d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5d4c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1d5d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d5d50: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1d5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5d54: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x1d5d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d5d58: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x1d5d58u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1d5d5c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x1d5d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d5d60: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1d5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1d5d64: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x1d5d64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d5d68: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d5d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d5d6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D5D6Cu;
    {
        const bool branch_taken_0x1d5d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D6Cu;
        // 0x1d5d70: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d6c) {
            ctx->pc = 0x1D5D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5d28;
        }
    }
    ctx->pc = 0x1D5D74u;
    // 0x1d5d74: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x1d5d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1d5d78: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5D78u;
    {
        const bool branch_taken_0x1d5d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d78) {
            ctx->pc = 0x1D5D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5D78u;
            // 0x1d5d7c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5DB8u;
            return;
        }
    }
    ctx->pc = 0x1D5D80u;
}
