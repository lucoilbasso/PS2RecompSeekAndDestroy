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

// Function: entry_001a7094
// Address: 0x1a7094 - 0x1a70d8
void entry_001a7094_0x1a7094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7094_0x1a7094");
#endif

    ctx->pc = 0x1a7094u;

    // 0x1a7094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a7098: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a7098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a709c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a70a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a70a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a70a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1a70a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1a70a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a70a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a70ac: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1a70acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1a70b0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1a70b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a70b4: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A70B4u;
    {
        const bool branch_taken_0x1a70b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70B4u;
        // 0x1a70b8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70b4) {
            ctx->pc = 0x1A7184u;
            return;
        }
    }
    ctx->pc = 0x1A70BCu;
    // 0x1a70bc: 0x3c157ffe  lui         $s5, 0x7FFE
    ctx->pc = 0x1a70bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32766 << 16));
    // 0x1a70c0: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a70c4: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1a70c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1a70c8: 0x3c170024  lui         $s7, 0x24
    ctx->pc = 0x1a70c8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)36 << 16));
    // 0x1a70cc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1a70ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a70d0: 0x3c160026  lui         $s6, 0x26
    ctx->pc = 0x1a70d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)38 << 16));
    // 0x1a70d4: 0x0  nop
    ctx->pc = 0x1a70d4u;
    // NOP
    ctx->pc = 0x1a70d8u;
}
