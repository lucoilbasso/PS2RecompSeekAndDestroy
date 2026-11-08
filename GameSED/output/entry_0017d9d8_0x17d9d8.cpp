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

// Function: entry_0017d9d8
// Address: 0x17d9d8 - 0x17da28
void entry_0017d9d8_0x17d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d9d8_0x17d9d8");
#endif

    ctx->pc = 0x17d9d8u;

    // 0x17d9d8: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x17d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x17d9dc: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x17d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x17d9e0: 0x8f080000  lw          $t0, 0x0($t8)
    ctx->pc = 0x17d9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x17d9e4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x17d9e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x17d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17d9ec: 0x8d860004  lw          $a2, 0x4($t4)
    ctx->pc = 0x17d9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x17d9f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17d9f4: 0xad63001c  sw          $v1, 0x1C($t3)
    ctx->pc = 0x17d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 3));
    // 0x17d9f8: 0x1021006  srlv        $v0, $v0, $t0
    ctx->pc = 0x17d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x17d9fc: 0xa5660000  sh          $a2, 0x0($t3)
    ctx->pc = 0x17d9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x17da00: 0xa5620006  sh          $v0, 0x6($t3)
    ctx->pc = 0x17da00u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x17da04: 0xad650020  sw          $a1, 0x20($t3)
    ctx->pc = 0x17da04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 5));
    // 0x17da08: 0xa5710002  sh          $s1, 0x2($t3)
    ctx->pc = 0x17da08u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x17da0c: 0xa5600004  sh          $zero, 0x4($t3)
    ctx->pc = 0x17da0cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da10: 0xa5640018  sh          $a0, 0x18($t3)
    ctx->pc = 0x17da10u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x17da14: 0xa5600028  sh          $zero, 0x28($t3)
    ctx->pc = 0x17da14u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x17da18: 0x3812  mflo        $a3
    ctx->pc = 0x17da18u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x17da1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17DA1Cu;
    {
        const bool branch_taken_0x17da1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DA1Cu;
        // 0x17da20: 0xa567001a  sh          $a3, 0x1A($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 26), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da1c) {
            ctx->pc = 0x17DA60u;
            return;
        }
    }
    ctx->pc = 0x17DA24u;
    // 0x17da24: 0x0  nop
    ctx->pc = 0x17da24u;
    // NOP
    ctx->pc = 0x17da28u;
}
