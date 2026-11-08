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

// Function: entry_001ba080
// Address: 0x1ba080 - 0x1ba0c4
void entry_001ba080_0x1ba080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba080_0x1ba080");
#endif

    switch (ctx->pc) {
        case 0x1ba094u: goto label_1ba094;
        case 0x1ba0a0u: goto label_1ba0a0;
        case 0x1ba0b0u: goto label_1ba0b0;
        default: break;
    }

    ctx->pc = 0x1ba080u;

    // 0x1ba080: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ba080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1ba084: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ba084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1ba088: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba08c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1BA08Cu;
    SET_GPR_U32(ctx, 31, 0x1BA094u);
    ctx->pc = 0x1BA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA08Cu;
    // 0x1ba090: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1BA08Cu, 0x1BA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA094u;
label_1ba094:
    // 0x1ba094: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba098: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1BA098u;
    SET_GPR_U32(ctx, 31, 0x1BA0A0u);
    ctx->pc = 0x1BA09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA098u;
    // 0x1ba09c: 0xae22c0a8  sw          $v0, -0x3F58($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951080), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1BA098u, 0x1BA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0A0u;
label_1ba0a0:
    // 0x1ba0a0: 0xae02c0ac  sw          $v0, -0x3F54($s0)
    ctx->pc = 0x1ba0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951084), GPR_U32(ctx, 2));
    // 0x1ba0a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ba0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0a8: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1BA0A8u;
    SET_GPR_U32(ctx, 31, 0x1BA0B0u);
    ctx->pc = 0x1BA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA0A8u;
    // 0x1ba0ac: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1BA0A8u, 0x1BA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0B0u;
label_1ba0b0:
    // 0x1ba0b0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ba0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1ba0b4: 0xac62c0a0  sw          $v0, -0x3F60($v1)
    ctx->pc = 0x1ba0b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24C0A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0A0u, _value); } while (0);
    // 0x1ba0b8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1ba0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1ba0bc: 0xac40c0b0  sw          $zero, -0x3F50($v0)
    ctx->pc = 0x1ba0bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24C0B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0B0u, _value); } while (0);
    // 0x1ba0c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ba0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x1ba0c4u;
}
