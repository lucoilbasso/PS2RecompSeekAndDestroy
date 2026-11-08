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

// Function: entry_0015103c
// Address: 0x15103c - 0x151070
void entry_0015103c_0x15103c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015103c_0x15103c");
#endif

    ctx->pc = 0x15103cu;

    // 0x15103c: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x15103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x151040: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x151040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x151044: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x151044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x151048: 0xc6050328  lwc1        $f5, 0x328($s0)
    ctx->pc = 0x151048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15104c: 0xc602032c  lwc1        $f2, 0x32C($s0)
    ctx->pc = 0x15104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151050: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x151050u;
    {
        const bool branch_taken_0x151050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151050u;
        // 0x151054: 0xc6010330  lwc1        $f1, 0x330($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151050) {
            ctx->pc = 0x151070u;
            return;
        }
    }
    ctx->pc = 0x151058u;
    // 0x151058: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x151058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x15105c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15105Cu;
    {
        const bool branch_taken_0x15105c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15105c) {
            ctx->pc = 0x151060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15105Cu;
            // 0x151060: 0xc6050348  lwc1        $f5, 0x348($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151074u;
            return;
        }
    }
    ctx->pc = 0x151064u;
    // 0x151064: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x151064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x151068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151068u;
    {
        const bool branch_taken_0x151068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151068) {
            ctx->pc = 0x15107Cu;
            return;
        }
    }
    ctx->pc = 0x151070u;
}
