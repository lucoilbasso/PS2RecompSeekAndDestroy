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

// Function: entry_001256d4
// Address: 0x1256d4 - 0x125718
void entry_001256d4_0x1256d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001256d4_0x1256d4");
#endif

    ctx->pc = 0x1256d4u;

    // 0x1256d4: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x1256d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1256d8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1256d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1256dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1256dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1256e0: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x1256e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1256e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1256e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1256e8: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x1256e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x1256ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1256ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1256f0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x1256f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1256f4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1256f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1256f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1256f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1256fc: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1256fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x125700: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x125700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x125704: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x125704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125708: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x125708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x12570c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12570cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x125710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x125710u;
    {
        const bool branch_taken_0x125710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125710u;
        // 0x125714: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125710) {
            ctx->pc = 0x125720u;
            return;
        }
    }
    ctx->pc = 0x125718u;
}
