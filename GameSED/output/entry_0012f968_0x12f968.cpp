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

// Function: entry_0012f968
// Address: 0x12f968 - 0x12f9a4
void entry_0012f968_0x12f968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f968_0x12f968");
#endif

    switch (ctx->pc) {
        case 0x12f98cu: goto label_12f98c;
        default: break;
    }

    ctx->pc = 0x12f968u;

    // 0x12f968: 0x8e2302f8  lw          $v1, 0x2F8($s1)
    ctx->pc = 0x12f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x12f96c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f970: 0x8c640188  lw          $a0, 0x188($v1)
    ctx->pc = 0x12f970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x12f974: 0x10800167  beqz        $a0, . + 4 + (0x167 << 2)
    ctx->pc = 0x12F974u;
    {
        const bool branch_taken_0x12f974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F974u;
        // 0x12f978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f974) {
            ctx->pc = 0x12FF14u;
            return;
        }
    }
    ctx->pc = 0x12F97Cu;
    // 0x12f97c: 0x8e67013c  lw          $a3, 0x13C($s3)
    ctx->pc = 0x12f97cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    // 0x12f980: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f984: 0xc049060  jal         func_124180
    ctx->pc = 0x12F984u;
    SET_GPR_U32(ctx, 31, 0x12F98Cu);
    ctx->pc = 0x12F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F984u;
    // 0x12f988: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124180u, 0x12F984u, 0x12F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F98Cu;
label_12f98c:
    // 0x12f98c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12f98cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f990: 0x52800161  beql        $s4, $zero, . + 4 + (0x161 << 2)
    ctx->pc = 0x12F990u;
    {
        const bool branch_taken_0x12f990 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f990) {
            ctx->pc = 0x12F994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F990u;
            // 0x12f994: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FF18u;
            return;
        }
    }
    ctx->pc = 0x12F998u;
    // 0x12f998: 0x8e62013c  lw          $v0, 0x13C($s3)
    ctx->pc = 0x12f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 316)));
    // 0x12f99c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F99Cu;
    {
        const bool branch_taken_0x12f99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f99c) {
            ctx->pc = 0x12F9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F99Cu;
            // 0x12f9a0: 0xae74013c  sw          $s4, 0x13C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 316), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F9A4u;
            return;
        }
    }
    ctx->pc = 0x12F9A4u;
}
