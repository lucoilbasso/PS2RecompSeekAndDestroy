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

// Function: entry_00147034
// Address: 0x147034 - 0x147090
void entry_00147034_0x147034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147034_0x147034");
#endif

    ctx->pc = 0x147034u;

    // 0x147034: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x147034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x147038: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x147038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x14703c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x14703cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x147040: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x147040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147044: 0x2473d650  addiu       $s3, $v1, -0x29B0
    ctx->pc = 0x147044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x147048: 0xac900030  sw          $s0, 0x30($a0)
    ctx->pc = 0x147048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 16));
    // 0x14704c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14704cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x147050: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x147050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x147054: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x147054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x147058: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x147058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x14705c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x14705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x147060: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x147060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x147064: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x147064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x147068: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x147068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x14706c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14706Cu;
    {
        const bool branch_taken_0x14706c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14706Cu;
        // 0x147070: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14706c) {
            ctx->pc = 0x147090u;
            return;
        }
    }
    ctx->pc = 0x147074u;
    // 0x147074: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x147074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x147078: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x147078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14707c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x147080: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x147080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x147084: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x147088: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x147088u;
    {
        const bool branch_taken_0x147088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147088u;
        // 0x14708c: 0xae630098  sw          $v1, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147088) {
            ctx->pc = 0x1470C4u;
            return;
        }
    }
    ctx->pc = 0x147090u;
}
