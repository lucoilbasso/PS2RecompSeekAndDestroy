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

// Function: entry_00182050
// Address: 0x182050 - 0x182088
void entry_00182050_0x182050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182050_0x182050");
#endif

    ctx->pc = 0x182050u;

    // 0x182050: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x182050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x182054: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x182054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182058: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x182058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x18205c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x18205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182060: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x182060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x26DBDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBDCu, _value); } while (0);
    // 0x182064: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x182064u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x182068: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x182068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBE0u, _value); } while (0);
    // 0x18206c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x18206cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC4u, _value); } while (0); }
    // 0x182070: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x182070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0); }
    // 0x182074: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x182074u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x26DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD0u, _value); } while (0);
    // 0x182078: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x182078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x26DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD8u, _value); } while (0);
    // 0x18207c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18207Cu;
    {
        const bool branch_taken_0x18207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18207Cu;
        // 0x182080: 0xafa30034  sw          $v1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18207c) {
            ctx->pc = 0x182100u;
            return;
        }
    }
    ctx->pc = 0x182084u;
    // 0x182084: 0x0  nop
    ctx->pc = 0x182084u;
    // NOP
    ctx->pc = 0x182088u;
}
