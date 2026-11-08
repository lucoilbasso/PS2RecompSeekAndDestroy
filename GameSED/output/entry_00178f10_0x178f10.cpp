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

// Function: entry_00178f10
// Address: 0x178f10 - 0x178f60
void entry_00178f10_0x178f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178f10_0x178f10");
#endif

    ctx->pc = 0x178f10u;

    // 0x178f10: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x178f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x178f14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f18: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x178f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x178f1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x178f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f20: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x178f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x178f24: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x178f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x178f28: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x178f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x178f2c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x178f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x178f30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x178f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178f34: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x178F34u;
    {
        const bool branch_taken_0x178f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x178F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F34u;
        // 0x178f38: 0x8e7245c0  lw          $s2, 0x45C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f34) {
            ctx->pc = 0x178F60u;
            return;
        }
    }
    ctx->pc = 0x178F3Cu;
    // 0x178f3c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x178f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x178f40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178f44: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x178f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x178f48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x178f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x178f4c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x178f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x178f50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178f54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x178F54u;
    {
        const bool branch_taken_0x178f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178f54) {
            ctx->pc = 0x178F64u;
            return;
        }
    }
    ctx->pc = 0x178F5Cu;
    // 0x178f5c: 0x0  nop
    ctx->pc = 0x178f5cu;
    // NOP
    ctx->pc = 0x178f60u;
}
