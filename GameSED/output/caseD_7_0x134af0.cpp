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

// Function: caseD_7
// Address: 0x134af0 - 0x134b28
void caseD_7_0x134af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x134af0");
#endif

    switch (ctx->pc) {
        case 0x134b1cu: goto label_134b1c;
        default: break;
    }

    ctx->pc = 0x134af0u;

    // 0x134af0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x134af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x134af4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x134af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x134af8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x134afc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x134afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134b04: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x134B04u;
    {
        const bool branch_taken_0x134b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x134B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B04u;
        // 0x134b08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b04) {
            ctx->pc = 0x134B28u;
            return;
        }
    }
    ctx->pc = 0x134B0Cu;
    // 0x134b0c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x134b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x134b10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b14: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x134B14u;
    SET_GPR_U32(ctx, 31, 0x134B1Cu);
    ctx->pc = 0x134B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B14u;
    // 0x134b18: 0x8c50b830  lw          $s0, -0x47D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134B14u, 0x134B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B1Cu;
label_134b1c:
    // 0x134b1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x134B1Cu;
    {
        const bool branch_taken_0x134b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134B1Cu;
        // 0x134b20: 0x8e63001c  lw          $v1, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b1c) {
            ctx->pc = 0x134B44u;
            return;
        }
    }
    ctx->pc = 0x134B24u;
    // 0x134b24: 0x0  nop
    ctx->pc = 0x134b24u;
    // NOP
    ctx->pc = 0x134b28u;
}
