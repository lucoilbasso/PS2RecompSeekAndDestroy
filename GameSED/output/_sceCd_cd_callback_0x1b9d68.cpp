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

// Function: _sceCd_cd_callback
// Address: 0x1b9d68 - 0x1b9e08
void _sceCd_cd_callback_0x1b9d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_cd_callback_0x1b9d68");
#endif

    switch (ctx->pc) {
        case 0x1b9dbcu: goto label_1b9dbc;
        case 0x1b9de4u: goto label_1b9de4;
        default: break;
    }

    ctx->pc = 0x1b9d68u;

    // 0x1b9d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9d6c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b9d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b9d70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b9d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9d78: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x1b9d78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
    // 0x1b9d7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b9d80: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1b9d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1b9d84: 0xae03c0d4  sw          $v1, -0x3F2C($s0)
    ctx->pc = 0x1b9d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x24C0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0D4u, _value); } while (0);
    // 0x1b9d88: 0x8e02c0d4  lw          $v0, -0x3F2C($s0)
    ctx->pc = 0x1b9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24C0D4u));
    // 0x1b9d8c: 0xac82c0d8  sw          $v0, -0x3F28($a0)
    ctx->pc = 0x1b9d8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x24C0D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0D8u, _value); } while (0);
    // 0x1b9d90: 0x8e03c0d4  lw          $v1, -0x3F2C($s0)
    ctx->pc = 0x1b9d90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24C0D4u));
    // 0x1b9d94: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9D94u;
    {
        const bool branch_taken_0x1b9d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B9D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D94u;
        // 0x1b9d98: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d94) {
            ctx->pc = 0x1B9DB0u;
            goto label_1b9db0;
        }
    }
    ctx->pc = 0x1B9D9Cu;
    // 0x1b9d9c: 0xae00c0d4  sw          $zero, -0x3F2C($s0)
    ctx->pc = 0x1b9d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951124), GPR_U32(ctx, 0));
    // 0x1b9da0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b9da4: 0xac40c0b0  sw          $zero, -0x3F50($v0)
    ctx->pc = 0x1b9da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24C0B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0B0u, _value); } while (0);
    // 0x1b9da8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B9DA8u;
    {
        const bool branch_taken_0x1b9da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DA8u;
        // 0x1b9dac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9da8) {
            ctx->pc = 0x1B9DFCu;
            goto label_1b9dfc;
        }
    }
    ctx->pc = 0x1B9DB0u;
label_1b9db0:
    // 0x1b9db0: 0x8c44c0a8  lw          $a0, -0x3F58($v0)
    ctx->pc = 0x1b9db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x1b9db4: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B9DB4u;
    SET_GPR_U32(ctx, 31, 0x1B9DBCu);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B9DB4u, 0x1B9DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DBCu;
label_1b9dbc:
    // 0x1b9dbc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b9dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b9dc0: 0x8c62c094  lw          $v0, -0x3F6C($v1)
    ctx->pc = 0x1b9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24C094u));
    // 0x1b9dc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9DC4u;
    {
        const bool branch_taken_0x1b9dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DC4u;
        // 0x1b9dc8: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9dc4) {
            ctx->pc = 0x1B9DECu;
            goto label_1b9dec;
        }
    }
    ctx->pc = 0x1B9DCCu;
    // 0x1b9dcc: 0x8c43d680  lw          $v1, -0x2980($v0)
    ctx->pc = 0x1b9dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956672)));
    // 0x1b9dd0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9DD0u;
    {
        const bool branch_taken_0x1b9dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DD0u;
        // 0x1b9dd4: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9dd0) {
            ctx->pc = 0x1B9DECu;
            goto label_1b9dec;
        }
    }
    ctx->pc = 0x1B9DD8u;
    // 0x1b9dd8: 0x8c44c0a0  lw          $a0, -0x3F60($v0)
    ctx->pc = 0x1b9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951072)));
    // 0x1b9ddc: 0xc06bd24  jal         func_1AF490
    ctx->pc = 0x1B9DDCu;
    SET_GPR_U32(ctx, 31, 0x1B9DE4u);
    ctx->pc = 0x1AF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF490u, 0x1B9DDCu, 0x1B9DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DE4u;
label_1b9de4:
    // 0x1b9de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9DE4u;
    {
        const bool branch_taken_0x1b9de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9de4) {
            ctx->pc = 0x1B9DF4u;
            goto label_1b9df4;
        }
    }
    ctx->pc = 0x1B9DECu;
label_1b9dec:
    // 0x1b9dec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b9decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b9df0: 0xac40c0b0  sw          $zero, -0x3F50($v0)
    ctx->pc = 0x1b9df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x24C0B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0B0u, _value); } while (0);
label_1b9df4:
    // 0x1b9df4: 0xae00c0d4  sw          $zero, -0x3F2C($s0)
    ctx->pc = 0x1b9df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294951124), GPR_U32(ctx, 0));
    // 0x1b9df8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9dfc:
    // 0x1b9dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E00u;
        // 0x1b9e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9E08u;
}
