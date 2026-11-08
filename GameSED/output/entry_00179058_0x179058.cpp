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

// Function: entry_00179058
// Address: 0x179058 - 0x1790a8
void entry_00179058_0x179058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179058_0x179058");
#endif

    ctx->pc = 0x179058u;

    // 0x179058: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x179058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x17905c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17905cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179060: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x179060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x179064: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x179064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179068: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x179068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x17906c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x17906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x179070: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x179070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x179074: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x179074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x179078: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x179078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17907c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17907Cu;
    {
        const bool branch_taken_0x17907c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x179080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17907Cu;
        // 0x179080: 0x8e7145c0  lw          $s1, 0x45C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17907c) {
            ctx->pc = 0x1790A8u;
            return;
        }
    }
    ctx->pc = 0x179084u;
    // 0x179084: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x179084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17908c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x17908cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x179090: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x179090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x179094: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x179094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x179098: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x179098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x17909c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17909Cu;
    {
        const bool branch_taken_0x17909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17909c) {
            ctx->pc = 0x1790ACu;
            return;
        }
    }
    ctx->pc = 0x1790A4u;
    // 0x1790a4: 0x0  nop
    ctx->pc = 0x1790a4u;
    // NOP
    ctx->pc = 0x1790a8u;
}
