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

// Function: entry_0015304c
// Address: 0x15304c - 0x1530a0
void entry_0015304c_0x15304c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015304c_0x15304c");
#endif

    ctx->pc = 0x15304cu;

    // 0x15304c: 0x8e2303b0  lw          $v1, 0x3B0($s1)
    ctx->pc = 0x15304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 944)));
    // 0x153050: 0x24101000  addiu       $s0, $zero, 0x1000
    ctx->pc = 0x153050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x153054: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x153054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x153058: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x153058u;
    {
        const bool branch_taken_0x153058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153058u;
        // 0x15305c: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153058) {
            ctx->pc = 0x153100u;
            return;
        }
    }
    ctx->pc = 0x153060u;
    // 0x153060: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x153060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x153064: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x153064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x153068: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x153068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15306c: 0x32a60040  andi        $a2, $s5, 0x40
    ctx->pc = 0x15306cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x153070: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x153070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x153074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x153074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153078: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x153078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x15307c: 0xae340374  sw          $s4, 0x374($s1)
    ctx->pc = 0x15307cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 884), GPR_U32(ctx, 20));
    // 0x153080: 0xae270370  sw          $a3, 0x370($s1)
    ctx->pc = 0x153080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 7));
    // 0x153084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153084u;
    {
        const bool branch_taken_0x153084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153084u;
        // 0x153088: 0x66200a  movz        $a0, $v1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153084) {
            ctx->pc = 0x1530A0u;
            return;
        }
    }
    ctx->pc = 0x15308Cu;
    // 0x15308c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x15308cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153090: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x153090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x153094: 0x66100a  movz        $v0, $v1, $a2
    ctx->pc = 0x153094u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x153098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15309c: 0xae220370  sw          $v0, 0x370($s1)
    ctx->pc = 0x15309cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
    ctx->pc = 0x1530a0u;
}
