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

// Function: entry_00194340
// Address: 0x194340 - 0x194354
void entry_00194340_0x194340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194340_0x194340");
#endif

    ctx->pc = 0x194340u;

    // 0x194340: 0x26260110  addiu       $a2, $s1, 0x110
    ctx->pc = 0x194340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x194344: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x194344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x194348: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x194348u;
    {
        const bool branch_taken_0x194348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194348u;
        // 0x19434c: 0xc6210190  lwc1        $f1, 0x190($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194348) {
            ctx->pc = 0x194354u;
            return;
        }
    }
    ctx->pc = 0x194350u;
    // 0x194350: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x194350u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    ctx->pc = 0x194354u;
}
