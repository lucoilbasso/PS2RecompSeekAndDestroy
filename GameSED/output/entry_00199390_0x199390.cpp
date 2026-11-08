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

// Function: entry_00199390
// Address: 0x199390 - 0x1993d8
void entry_00199390_0x199390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199390_0x199390");
#endif

    ctx->pc = 0x199390u;

    // 0x199390: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x199390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x199394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19939c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1993a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1993a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1993a4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1993a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1993a8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1993a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1993ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1993acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1993b0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1993b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1993b4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1993b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1993b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1993bc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1993bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1993c0: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x1993c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1993c4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1993C4u;
    {
        const bool branch_taken_0x1993c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1993C4u;
        // 0x1993c8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1993c4) {
            ctx->pc = 0x199498u;
            return;
        }
    }
    ctx->pc = 0x1993CCu;
    // 0x1993cc: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1993ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1993d0: 0x26720004  addiu       $s2, $s3, 0x4
    ctx->pc = 0x1993d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1993d4: 0x2c560002  sltiu       $s6, $v0, 0x2
    ctx->pc = 0x1993d4u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x1993d8u;
}
