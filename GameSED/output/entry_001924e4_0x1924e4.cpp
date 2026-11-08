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

// Function: entry_001924e4
// Address: 0x1924e4 - 0x19252c
void entry_001924e4_0x1924e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001924e4_0x1924e4");
#endif

    ctx->pc = 0x1924e4u;

    // 0x1924e4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1924e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1924e8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1924e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1924ec: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1924ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1924f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1924f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1924f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1924f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1924f8: 0x29440002  slti        $a0, $t2, 0x2
    ctx->pc = 0x1924f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1924fc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1924fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x192500: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x192500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x192504: 0xfc6d0008  sd          $t5, 0x8($v1)
    ctx->pc = 0x192504u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 13));
    // 0x192508: 0x29450004  slti        $a1, $t2, 0x4
    ctx->pc = 0x192508u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19250c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x19250cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192510: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x192510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x192514: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x192514u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x192518: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192518u;
    {
        const bool branch_taken_0x192518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192518u;
        // 0x19251c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192518) {
            ctx->pc = 0x19252Cu;
            return;
        }
    }
    ctx->pc = 0x192520u;
    // 0x192520: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x192520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x192524: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x192524u;
    {
        const bool branch_taken_0x192524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192524) {
            ctx->pc = 0x192528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192524u;
            // 0x192528: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19253Cu;
            return;
        }
    }
    ctx->pc = 0x19252Cu;
}
