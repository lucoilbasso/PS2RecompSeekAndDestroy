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

// Function: entry_001541d0
// Address: 0x1541d0 - 0x154210
void entry_001541d0_0x1541d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001541d0_0x1541d0");
#endif

    ctx->pc = 0x1541d0u;

    // 0x1541d0: 0x8e240690  lw          $a0, 0x690($s1)
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x1541d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1541d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1541d8: 0x8e250180  lw          $a1, 0x180($s1)
    ctx->pc = 0x1541d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1541dc: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1541dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1541e0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1541e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1541e4: 0x30a50400  andi        $a1, $a1, 0x400
    ctx->pc = 0x1541e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1024);
    // 0x1541e8: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x1541e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x1541ec: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1541ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1541f0: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x1541f0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1541f4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1541F4u;
    {
        const bool branch_taken_0x1541f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1541F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1541F4u;
        // 0x1541f8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1541f4) {
            ctx->pc = 0x154210u;
            return;
        }
    }
    ctx->pc = 0x1541FCu;
    // 0x1541fc: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x1541fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
    // 0x154200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154204: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x154204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154208: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x154208u;
    {
        const bool branch_taken_0x154208 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x154208) {
            ctx->pc = 0x15420Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154208u;
            // 0x15420c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154210u;
            return;
        }
    }
    ctx->pc = 0x154210u;
}
