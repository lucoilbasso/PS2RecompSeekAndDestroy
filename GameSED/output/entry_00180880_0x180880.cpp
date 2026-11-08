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

// Function: entry_00180880
// Address: 0x180880 - 0x1808d0
void entry_00180880_0x180880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180880_0x180880");
#endif

    ctx->pc = 0x180880u;

    // 0x180880: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x180880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x180884: 0xc7220000  lwc1        $f2, 0x0($t9)
    ctx->pc = 0x180884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x180888: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x18088c: 0xc7210004  lwc1        $f1, 0x4($t9)
    ctx->pc = 0x18088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180890: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x180890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180894: 0xc7200008  lwc1        $f0, 0x8($t9)
    ctx->pc = 0x180894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18089c: 0xaf270018  sw          $a3, 0x18($t9)
    ctx->pc = 0x18089cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 24), GPR_U32(ctx, 7));
    // 0x1808a0: 0xac69001c  sw          $t1, 0x1C($v1)
    ctx->pc = 0x1808a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x26DBDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBDCu, _value); } while (0);
    // 0x1808a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1808a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x26DBC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC0u, _value); } while (0);
    // 0x1808a8: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1808a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x26DBE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBE0u, _value); } while (0);
    // 0x1808ac: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1808acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC4u, _value); } while (0); }
    // 0x1808b0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1808b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBC8u, _value); } while (0); }
    // 0x1808b4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1808b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x26DBCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBCCu, _value); } while (0); }
    // 0x1808b8: 0xac6c0010  sw          $t4, 0x10($v1)
    ctx->pc = 0x1808b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x26DBD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD0u, _value); } while (0);
    // 0x1808bc: 0xac6b0014  sw          $t3, 0x14($v1)
    ctx->pc = 0x1808bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x26DBD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD4u, _value); } while (0);
    // 0x1808c0: 0xac6a0018  sw          $t2, 0x18($v1)
    ctx->pc = 0x1808c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x26DBD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DBD8u, _value); } while (0);
    // 0x1808c4: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1808C4u;
    {
        const bool branch_taken_0x1808c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1808C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1808C4u;
        // 0x1808c8: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1808c4) {
            ctx->pc = 0x180BECu;
            return;
        }
    }
    ctx->pc = 0x1808CCu;
    // 0x1808cc: 0x0  nop
    ctx->pc = 0x1808ccu;
    // NOP
    ctx->pc = 0x1808d0u;
}
