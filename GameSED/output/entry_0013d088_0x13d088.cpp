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

// Function: entry_0013d088
// Address: 0x13d088 - 0x13d0e8
void entry_0013d088_0x13d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d088_0x13d088");
#endif

    ctx->pc = 0x13d088u;

    // 0x13d088: 0x10c000a3  beqz        $a2, . + 4 + (0xA3 << 2)
    ctx->pc = 0x13D088u;
    {
        const bool branch_taken_0x13d088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D088u;
        // 0x13d08c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d088) {
            ctx->pc = 0x13D318u;
            return;
        }
    }
    ctx->pc = 0x13D090u;
    // 0x13d090: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x13d090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x13d094: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x13d094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13d098: 0x244a2200  addiu       $t2, $v0, 0x2200
    ctx->pc = 0x13d098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8704));
    // 0x13d09c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x13d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x13d0a0: 0x25490020  addiu       $t1, $t2, 0x20
    ctx->pc = 0x13d0a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x13d0a4: 0x25440030  addiu       $a0, $t2, 0x30
    ctx->pc = 0x13d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x13d0a8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x13d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x13d0ac: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x13d0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
    // 0x13d0b0: 0x28c60002  slti        $a2, $a2, 0x2
    ctx->pc = 0x13d0b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13d0b4: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x13d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x13d0b8: 0x25480010  addiu       $t0, $t2, 0x10
    ctx->pc = 0x13d0b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x13d0bc: 0xfd200000  sd          $zero, 0x0($t1)
    ctx->pc = 0x13d0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 0));
    // 0x13d0c0: 0x25490040  addiu       $t1, $t2, 0x40
    ctx->pc = 0x13d0c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x13d0c4: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x13d0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x13d0c8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D0C8u;
    {
        const bool branch_taken_0x13d0c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0C8u;
        // 0x13d0cc: 0xfc850000  sd          $a1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0c8) {
            ctx->pc = 0x13D0E8u;
            return;
        }
    }
    ctx->pc = 0x13D0D0u;
    // 0x13d0d0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x13d0d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d0d4: 0x25490050  addiu       $t1, $t2, 0x50
    ctx->pc = 0x13d0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x13d0d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x13d0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13d0dc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x13d0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13d0e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D0E0u;
    {
        const bool branch_taken_0x13d0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0E0u;
        // 0x13d0e4: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0e0) {
            ctx->pc = 0x13D0FCu;
            return;
        }
    }
    ctx->pc = 0x13D0E8u;
}
