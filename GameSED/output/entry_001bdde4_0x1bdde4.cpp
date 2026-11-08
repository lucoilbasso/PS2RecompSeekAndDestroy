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

// Function: entry_001bdde4
// Address: 0x1bdde4 - 0x1bde1c
void entry_001bdde4_0x1bdde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bdde4_0x1bdde4");
#endif

    switch (ctx->pc) {
        case 0x1bddf4u: goto label_1bddf4;
        default: break;
    }

    ctx->pc = 0x1bdde4u;

    // 0x1bdde4: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1bdde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bddec: 0xc070ae0  jal         func_1C2B80
    ctx->pc = 0x1BDDECu;
    SET_GPR_U32(ctx, 31, 0x1BDDF4u);
    ctx->pc = 0x1BDDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDECu;
    // 0x1bddf0: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2B80u, 0x1BDDECu, 0x1BDDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDF4u;
label_1bddf4:
    // 0x1bddf4: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1bddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1bddf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bddfc: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDDFCu;
    {
        const bool branch_taken_0x1bddfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bddfc) {
            ctx->pc = 0x1BDE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDDFCu;
            // 0x1bde00: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDE1Cu;
            return;
        }
    }
    ctx->pc = 0x1BDE04u;
    // 0x1bde04: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDE04u;
    {
        const bool branch_taken_0x1bde04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bde04) {
            ctx->pc = 0x1BDE08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDE04u;
            // 0x1bde08: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDE1Cu;
            return;
        }
    }
    ctx->pc = 0x1BDE0Cu;
    // 0x1bde0c: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1bde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1bde10: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1bde10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bde14: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1bde14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x1bde18: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1bde18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->pc = 0x1bde1cu;
}
