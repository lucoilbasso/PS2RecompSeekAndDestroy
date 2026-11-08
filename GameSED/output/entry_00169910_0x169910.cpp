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

// Function: entry_00169910
// Address: 0x169910 - 0x169958
void entry_00169910_0x169910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169910_0x169910");
#endif

    ctx->pc = 0x169910u;

    // 0x169910: 0x2442ffcb  addiu       $v0, $v0, -0x35
    ctx->pc = 0x169910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967243));
    // 0x169914: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x169914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x169918: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x169918u;
    {
        const bool branch_taken_0x169918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169918) {
            ctx->pc = 0x16991Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169918u;
            // 0x16991c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169980u;
            return;
        }
    }
    ctx->pc = 0x169920u;
    // 0x169920: 0x8e021264  lw          $v0, 0x1264($s0)
    ctx->pc = 0x169920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4708)));
    // 0x169924: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x169924u;
    {
        const bool branch_taken_0x169924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169924) {
            ctx->pc = 0x169928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169924u;
            // 0x169928: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169980u;
            return;
        }
    }
    ctx->pc = 0x16992Cu;
    // 0x16992c: 0x8c420180  lw          $v0, 0x180($v0)
    ctx->pc = 0x16992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x169930: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x169930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x169934: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x169934u;
    {
        const bool branch_taken_0x169934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169934) {
            ctx->pc = 0x169938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169934u;
            // 0x169938: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169980u;
            return;
        }
    }
    ctx->pc = 0x16993Cu;
    // 0x16993c: 0x8e031234  lw          $v1, 0x1234($s0)
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
    // 0x169940: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x169940u;
    {
        const bool branch_taken_0x169940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169940u;
        // 0x169944: 0xae001268  sw          $zero, 0x1268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169940) {
            ctx->pc = 0x169958u;
            return;
        }
    }
    ctx->pc = 0x169948u;
    // 0x169948: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x169948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16994c: 0xae001234  sw          $zero, 0x1234($s0)
    ctx->pc = 0x16994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4660), GPR_U32(ctx, 0));
    // 0x169950: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x169950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x169954: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x169954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x169958u;
}
