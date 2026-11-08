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

// Function: entry_00195e88
// Address: 0x195e88 - 0x195ee0
void entry_00195e88_0x195e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195e88_0x195e88");
#endif

    ctx->pc = 0x195e88u;

    // 0x195e88: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x195e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x195e8c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x195e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195e90: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x195e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x195e94: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x195e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e98: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x195e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195e9c: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x195e9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x195ea0: 0x1464000f  bne         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x195EA0u;
    {
        const bool branch_taken_0x195ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x195EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EA0u;
        // 0x195ea4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ea0) {
            ctx->pc = 0x195EE0u;
            return;
        }
    }
    ctx->pc = 0x195EA8u;
    // 0x195ea8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x195ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x195eac: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x195eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x195eb0: 0x3c21025  or          $v0, $fp, $v0
    ctx->pc = 0x195eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
    // 0x195eb4: 0xffa30048  sd          $v1, 0x48($sp)
    ctx->pc = 0x195eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
    // 0x195eb8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x195eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x195ebc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x195ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x195ec0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x195ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195ec4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x195ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x195ec8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195ecc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x195eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195ed0: 0x31ff8  dsll        $v1, $v1, 31
    ctx->pc = 0x195ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 31);
    // 0x195ed4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x195ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x195ed8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x195ED8u;
    {
        const bool branch_taken_0x195ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195ED8u;
        // 0x195edc: 0x34e70001  ori         $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ed8) {
            ctx->pc = 0x195EECu;
            return;
        }
    }
    ctx->pc = 0x195EE0u;
}
