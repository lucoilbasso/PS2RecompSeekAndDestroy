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

// Function: entry_001819c0
// Address: 0x1819c0 - 0x181a10
void entry_001819c0_0x1819c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001819c0_0x1819c0");
#endif

    ctx->pc = 0x1819c0u;

    // 0x1819c0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x1819c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x1819c4: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x1819c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1819c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1819c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1819cc: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1819ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBE0u, _value); } while (0);
    // 0x1819d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1819d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x1819d4: 0xc7010008  lwc1        $f1, 0x8($t8)
    ctx->pc = 0x1819d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1819d8: 0x8d840028  lw          $a0, 0x28($t4)
    ctx->pc = 0x1819d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x1819dc: 0xc7000000  lwc1        $f0, 0x0($t8)
    ctx->pc = 0x1819dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1819e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1819e4: 0xac6a001c  sw          $t2, 0x1C($v1)
    ctx->pc = 0x1819e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x26DBDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBDCu, _value); } while (0);
    // 0x1819e8: 0xad890060  sw          $t1, 0x60($t4)
    ctx->pc = 0x1819e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 96), GPR_U32(ctx, 9));
    // 0x1819ec: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1819ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC4u, _value); } while (0); }
    // 0x1819f0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x1819f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0); }
    // 0x1819f4: 0xac6b0010  sw          $t3, 0x10($v1)
    ctx->pc = 0x1819f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x26DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD0u, _value); } while (0);
    // 0x1819f8: 0xac680018  sw          $t0, 0x18($v1)
    ctx->pc = 0x1819f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x26DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD8u, _value); } while (0);
    // 0x1819fc: 0xad840028  sw          $a0, 0x28($t4)
    ctx->pc = 0x1819fcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 40), GPR_U32(ctx, 4));
    // 0x181a00: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x181a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x181a04: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x181a04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC8u, _value); } while (0);
    // 0x181a08: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x181A08u;
    {
        const bool branch_taken_0x181a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A08u;
        // 0x181a0c: 0xac680014  sw          $t0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a08) {
            ctx->pc = 0x181B94u;
            return;
        }
    }
    ctx->pc = 0x181A10u;
}
