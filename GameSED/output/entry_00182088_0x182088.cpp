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

// Function: entry_00182088
// Address: 0x182088 - 0x1820c8
void entry_00182088_0x182088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182088_0x182088");
#endif

    ctx->pc = 0x182088u;

    // 0x182088: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x182088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x18208c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x18208cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x182090: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x182090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182094: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x182094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x182098: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x182098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18209c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1820a0: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x1820a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x26DBDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBDCu, _value); } while (0);
    // 0x1820a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1820a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x1820a8: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x1820a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBE0u, _value); } while (0);
    // 0x1820ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1820acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC4u, _value); } while (0); }
    // 0x1820b0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1820b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0); }
    // 0x1820b4: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x1820b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x26DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD0u, _value); } while (0);
    // 0x1820b8: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x1820b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x26DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD8u, _value); } while (0);
    // 0x1820bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1820BCu;
    {
        const bool branch_taken_0x1820bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1820C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1820BCu;
        // 0x1820c0: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1820bc) {
            ctx->pc = 0x182100u;
            return;
        }
    }
    ctx->pc = 0x1820C4u;
    // 0x1820c4: 0x0  nop
    ctx->pc = 0x1820c4u;
    // NOP
    ctx->pc = 0x1820c8u;
}
