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

// Function: entry_00101de8
// Address: 0x101de8 - 0x101e30
void entry_00101de8_0x101de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101de8_0x101de8");
#endif

    ctx->pc = 0x101de8u;

    // 0x101de8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x101dec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x101decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101df0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x101df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x101df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x101df8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x101df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x101dfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x101dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x101e00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x101e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x101e04: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x101e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x101e08: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x101e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x101e0c: 0x1482003e  bne         $a0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x101E0Cu;
    {
        const bool branch_taken_0x101e0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x101E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E0Cu;
        // 0x101e10: 0x8c720044  lw          $s2, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e0c) {
            ctx->pc = 0x101F08u;
            return;
        }
    }
    ctx->pc = 0x101E14u;
    // 0x101e14: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x101e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x101e18: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x101E18u;
    {
        const bool branch_taken_0x101e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101e18) {
            ctx->pc = 0x101E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101E18u;
            // 0x101e1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101E8Cu;
            return;
        }
    }
    ctx->pc = 0x101E20u;
    // 0x101e20: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x101e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x101e24: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x101e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e28: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x101E28u;
    {
        const bool branch_taken_0x101e28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E28u;
        // 0x101e2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e28) {
            ctx->pc = 0x101E7Cu;
            return;
        }
    }
    ctx->pc = 0x101E30u;
}
