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

// Function: entry_00198c00
// Address: 0x198c00 - 0x198c68
void entry_00198c00_0x198c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198c00_0x198c00");
#endif

    ctx->pc = 0x198c00u;

    // 0x198c00: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x198c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x198c04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x198c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x198c08: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x198c08u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x198c0c: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x198c0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x198c10: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x198c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x198c14: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x198c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x198c18: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x198c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x198c1c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x198c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x198c20: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x198c20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198c24: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x198C24u;
    {
        const bool branch_taken_0x198c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C24u;
        // 0x198c28: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c24) {
            ctx->pc = 0x198C8Cu;
            return;
        }
    }
    ctx->pc = 0x198C2Cu;
    // 0x198c2c: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x198c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x198c30: 0x71bc2  srl         $v1, $a3, 15
    ctx->pc = 0x198c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 15));
    // 0x198c34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x198c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x198c38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x198c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x198c3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x198c40: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x198c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x198c44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x198c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x198c48: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198C48u;
    {
        const bool branch_taken_0x198c48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x198C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C48u;
        // 0x198c4c: 0x641825  or          $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c48) {
            ctx->pc = 0x198C68u;
            return;
        }
    }
    ctx->pc = 0x198C50u;
    // 0x198c50: 0x313fc  dsll32      $v0, $v1, 15
    ctx->pc = 0x198c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 15));
    // 0x198c54: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x198c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x198c58: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x198c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x198c5c: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x198c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x198c60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x198C60u;
    {
        const bool branch_taken_0x198c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C60u;
        // 0x198c64: 0x24030412  addiu       $v1, $zero, 0x412 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c60) {
            ctx->pc = 0x198C7Cu;
            return;
        }
    }
    ctx->pc = 0x198C68u;
}
